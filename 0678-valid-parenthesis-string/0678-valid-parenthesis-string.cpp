class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int close=0;
        int star=0;
        for(auto i : s){
            if(i == '('){
                open+=1;
            }else if(i == '*'){
                if(open > 0){
                    open--;
                    star++;
                }
                star++;
            }else{
                if(open > 0){
                    open-=1;
                }else if(star>0){
                    star--;
                }else{
                    return false;
                }
            }
        }
        return open==0;
    }
};