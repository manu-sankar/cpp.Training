#include <iostream>
#include <thread>
#include<thread>
using namespace std;
void backgroundTask() {
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "Background task done." << std::endl;
}

void modifyX(int& val)
{
    val *= 2;
    std::this_thread::sleep_for(std::chrono::seconds(10));
}


int main() {
    int val;
    std::thread t(backgroundTask);
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
    std::this_thread::sleep_for(std::chrono::seconds(5)); // Wait to see output
    thread t1(modifyX, ref(val));
    t1.join();
    return 0;
}