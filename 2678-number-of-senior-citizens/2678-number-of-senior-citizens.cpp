class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string str : details){
            if(str[11] >= '6'){
                if(str[11] == '6' && str[12] == '0') continue;
                if(str[12] >= '0'){
                    count++;
                }
            }
        }
        return count;
    }
};