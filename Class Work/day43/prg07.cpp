#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main() {
    std::istream_iterator<int> in(std::cin), eof;
    std::vector<int> v(in, eof); // reads all input into vector
    for (auto i : v)
        cout << i << " ";
}

