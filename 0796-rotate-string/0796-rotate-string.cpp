#include <string>

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        if (s.empty() && goal.empty()) return true;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s == goal) return true; 
            char temp = s[0];
            for (int j = 0; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            s[n - 1] = temp;
        }
        return false; 
    }
};
