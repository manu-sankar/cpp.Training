#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };


    for (auto& word : words)
    {
        for (auto& ch : word)
        {
            ch = std::tolower(ch);
        }
    }


    std::sort(words.begin(), words.end());


    auto last = std::unique(words.begin(), words.end());
    words.erase(last, words.end());


    for (const auto& word : words) {
        std::cout << word << " ";
    }

    return 0;
}