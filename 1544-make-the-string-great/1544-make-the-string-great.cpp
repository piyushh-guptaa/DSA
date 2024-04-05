class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for (char c : s) {
            if (!stk.empty() && abs(stk.top() - c) == 32) {
                stk.pop(); // Remove the last character from the stack
            } else {
                stk.push(c); // Add the character to the stack
            }
        }
        
        string result;
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        
        return result;
    }
};