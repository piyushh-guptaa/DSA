#include<algorithm>
class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> map;
        int n = s.length();
        
        for(int i = 0; i < n; i++){
            string curString = "";
            for(int j = i; j < n; j++){
                if(curString.length() == 0 || s[j] == curString[curString.length()-1]){
                    curString += s[j];
                    if(map.count(curString)){
                        map[curString]+=1;
                    }else{
                        map[curString] = 1;
                    }
                }else{
                    break;
                }
            }
        }
        int maxLen = -1;
        for(auto& s : map){
            if(s.second > 2){
                maxLen = max(maxLen, (int)s.first.length());
            }
        }
        return maxLen;
        
    }
};