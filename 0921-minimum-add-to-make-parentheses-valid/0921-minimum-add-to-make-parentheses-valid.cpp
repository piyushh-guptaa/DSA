class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0, right = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(c == '('){
                left++;
            }else{
                if(left > 0){
                    left--;
                }else{
                    right++;
                }
            }
        }
        return left+right;
    }
};