class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int cnt=0;
        unordered_map<string, int> map;
        unordered_map<string, int> map2;
        for(int i = 0; i < words1.size(); i++){
            map[words1[i]]++;
        }
        for(int i = 0; i < words2.size(); i++){
            map2[words2[i]]++;
        }
        for(int i = 0; i < words1.size(); i++){
            if(map[words1[i]] == 1 && map2[words1[i]] == 1){
                cnt++;
            }
        }
        return cnt;
    }
};