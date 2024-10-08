class Solution {
public:
    int minSwaps(string s) {
         int count = 0, op = 0;

        for(char& ch: s){
            if(ch == '[') op++;
            else if(op > 0) op--;
            else count++;
        }

        return (count + 1) / 2;
    }
};