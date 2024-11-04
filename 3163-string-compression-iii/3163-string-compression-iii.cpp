#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    string compressedString(string word) {
        unordered_map<char, int> map;
        string comp = "";
        int i = 0;
        while (i < word.length()) {
            char currentChar = word[i];
            map[currentChar] = 0;
            while (i < word.length() && word[i] == currentChar && map[currentChar] < 9) {
                map[currentChar]++;
                i++;
            }
            comp += to_string(map[currentChar]) + currentChar;
        }

        return comp;
    }
};

