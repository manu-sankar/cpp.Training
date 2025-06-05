#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };


    for (auto& word : words)
    {
        for (auto& ch : word)
        {
            ch = tolower(ch);
        }
    }


    sort(words.begin(), words.end());


    auto last = std::unique(words.begin(), words.end());
    words.erase(last, words.end());


    for (const auto& word : words) {
        cout << word << " ";
    }

    return 0;
}