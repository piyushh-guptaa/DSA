class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length()-1;
        for(int i = len; i >=0; i--){
            if((num[i]-'0') %2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};