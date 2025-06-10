#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

class Solution {
private:
    unordered_set<char>letters;
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int left = 0;
        for (int right = 0;right < s.size();right++)
        {
            while (letters.count(s[right]))
            {
                letters.erase(s[left]);
                left++;
            }
            letters.insert(s[right]);
            length = max(length, right - left + 1);
        }
        return length;
    }
};