#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>


using namespace std;

class Memory {
public:
    Memory() {
        memory.resize(65536, 0);
    }

    int read(int address) {
        return memory[address];
    }

    void write(int address, int value) {
        memory[address] = value;
    }

    void disp() {  // Renamed from printSnapshot
        for (int i = 0; i < 16; ++i) {
            cout << i << " -> " << memory[i] << endl;
        }
    }

private:
    vector<int> memory;
};

class Registers {
public:
    Registers() {
        registers["AX"] = 0;
        registers["BX"] = 0;
        registers["CX"] = 0;
        registers["DX"] = 0;
    }

    int get(const string& reg) {
        return registers[reg];
    }

    void set(const string& reg, int value) {
        registers[reg] = value;
    }

    void disp() {  // No change needed, already named disp
        cout << "AX: " << registers["AX"] << endl;
        cout << "BX: " << registers["BX"] << endl;
        cout << "CX: " << registers["CX"] << endl;
        cout << "DX: " << registers["DX"] << endl;
    }

private:
    unordered_map<string, int> registers;
};

class Processor {
public:
    Processor() : pc(0), isHalt(false) {}

    void loadInstructions(const vector<string>& instructions) {
        this->instructions = instructions;
    }


    void execute(Memory& memory, Registers& registers) {
        while (!isHalt && pc < instructions.size()) {
            string instruction = instructions[pc];
            parseAndExecute(instruction, memory, registers);
            pc++;
        }
    }

    void disp(Memory& memory, Registers& registers) {  // Renamed from printSnapshot
        cout << "Received Interrupt" << endl;
        registers.disp();
        memory.disp();
    }

private:
    int pc;
    bool isHalt;
    vector<string> instructions;

    void parseAndExecute(const string& instruction, Memory& memory, Registers& registers) {
        size_t firstSpace = instruction.find(' ');
        if (firstSpace == string::npos) {
            if (instruction == "HLT") isHalt = true;
            return;
        }

        string op = instruction.substr(0, firstSpace);
        string args = instruction.substr(firstSpace + 1);

        if (op == "MOV") {
            handleMOV(args, memory, registers);
        }
        else if (op == "ADD") {
            handleADD(args, registers);
        }
        else if (op == "SUB") {
            handleSUB(args, registers);
        }
    }

    void handleMOV(string args, Memory& memory, Registers& registers) {
        size_t spacePos = args.find(' ');
        string dest = args.substr(0, spacePos);
        string src = args.substr(spacePos + 1);

        if (src[0] == '[') { // Memory address
            int address = stoi(src.substr(1, src.size() - 2));
            if (dest[0] == '[') { // Memory to Memory
                int srcValue = memory.read(address);
                int destAddress = stoi(dest.substr(1, dest.size() - 2));
                memory.write(destAddress, srcValue);
            }
            else { // Register to Memory
                memory.write(stoi(dest.substr(1, dest.size() - 2)), registers.get(src));
            }
        }
        else if (isdigit(src[0]) || src[0] == '-') { // Immediate value
            if (dest[0] == '[') { // Memory
                memory.write(stoi(dest.substr(1, dest.size() - 2)), stoi(src));
            }
            else { // Register
                registers.set(dest, stoi(src));
            }
        }
        else { // Register to Register
            registers.set(dest, registers.get(src));
        }
    }

    void handleADD(string args, Registers& registers) {
        size_t spacePos = args.find(' ');
        string dest = args.substr(0, spacePos);
        string src = args.substr(spacePos + 1);
        int value = (isdigit(src[0]) || src[0] == '-') ? stoi(src) : registers.get(src);
        registers.set("AX", registers.get(dest) + value);
    }

    void handleSUB(string args, Registers& registers) {
        size_t spacePos = args.find(' ');
        string dest = args.substr(0, spacePos);
        string src = args.substr(spacePos + 1);
        int value = (isdigit(src[0]) || src[0] == '-') ? stoi(src) : registers.get(src);
        registers.set("AX", registers.get(dest) - value);
    }
};

int main() {
    Memory memory;
    Registers registers;
    Processor processor;

    ifstream infile("instructions.txt");
    vector<string> instructions;
    string line;

    while (getline(infile, line)) {
        if (line == "HLT") {
            instructions.push_back(line);
            break;
        }
        instructions.push_back(line);
    }

    processor.loadInstructions(instructions);
    processor.execute(memory, registers);
    processor.disp(memory, registers);  // Changed from printSnapshot to disp

    return 0;
}
