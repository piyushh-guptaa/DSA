class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size = s1.length();
        unordered_map<char, int> map;
        for(int i = 0; i < s1.length(); i++){
            map[s1[i]]++;
        }
        for(int i = 0; i < s2.length(); i++){
            string curr = s2.substr(i,size);
            unordered_map<char, int> intMap;
            for(int j = 0; j < curr.length(); j++){
                intMap[curr[j]]++;
            }
            if(map == intMap){
                return true;
            }
        }
        return false;
    }
};