class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> stk;
        for(char digit: num){
            while(!stk.empty() && k > 0 && stk.top() > digit){
                stk.pop();
                k--;
            }
            stk.push(digit);
        }
        while(k > 0 && !stk.empty()){
            stk.pop();
            k--;
        }
        string result;
        while(!stk.empty()){
            result+=stk.top();
            stk.pop();
        }
        reverse(result.begin(), result.end());
        size_t pos = result.find_first_not_of('0');
        result = (pos == std::string::npos) ? "0" : result.substr(pos);
        
        return result;
    }
};