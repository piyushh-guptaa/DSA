class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        unordered_map<string, int> map;
        int prefLen = pref.length();
        for(int i = 0; i < words.size(); i++){
            string str = words[i].substr(0,prefLen);
            if(str == pref){
                cnt++;
            }
            
        }
        return cnt;
    }
};