class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, vector<string>> map;
        for(string s : strs){
            string word = s;
            sort(word.begin(), word.end());
            map[word].push_back(s);
        }
        for(auto itr : map){
            output.push_back(itr.second);
        }
        return output;
    }
};