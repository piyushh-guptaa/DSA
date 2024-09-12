class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> amap;
        for(int i = 0; i < allowed.size(); i++){
            amap[allowed[i]]++;
        }
        int cnt = 0;
        for(string str : words){
            bool isConsistent = true;
            for(int i = 0; i < str.length(); i++){
                if(!amap.count(str[i])){
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent){
                cnt++;
            }
        }   
        return cnt;
    }
};
