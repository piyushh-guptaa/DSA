class Solution {
public:
    
    void solve(int open, int close, string op, vector<string>& vec){
        if(open == 0 && close == 0){
            vec.push_back(op);
            return;
        }
        if(open != 0){
            string op1 = op;
            op1 += '(';
            solve(open-1,close, op1, vec);
        }
        if(close > open){
            string op2 = op;
            op2 += ')';
            solve(open, close-1,op2, vec);
        }
        return;
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        int open = n;
        int close = n;
        string op = "";
        solve(open, close, op, vec);
        return vec;
    }
};