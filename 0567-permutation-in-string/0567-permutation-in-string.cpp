#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        unordered_map<char, int> s1Map, windowMap;
        for (char c : s1) {
            s1Map[c]++;
        }
        int windowSize = s1.length();
        for (int i = 0; i < windowSize; i++) {
            windowMap[s2[i]]++;
        }
        if (s1Map == windowMap) {
            return true;
        }
        for (int i = windowSize; i < s2.length(); i++) {
            windowMap[s2[i]]++;
            char charToRemove = s2[i - windowSize];
            windowMap[charToRemove]--;
            if (windowMap[charToRemove] == 0) {
                windowMap.erase(charToRemove);
            }
            if (s1Map == windowMap) {
                return true;
            }
        }
        return false;
    }
};
