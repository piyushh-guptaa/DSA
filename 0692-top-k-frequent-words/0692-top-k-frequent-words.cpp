class Solution {
public:
    bool static cmp(pair<int,string> p1,pair<int,string> p2){
        if(p1.first==p2.first){
            return p1.second<p2.second;
        }
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> output;
        unordered_map<string, int> map;
        for(int i = 0; i < words.size();i++){
            map[words[i]]++;
        }
        vector<pair<int, string>> vec;
        for(auto i : map){
            vec.push_back({i.second, i.first});
        }
        sort(vec.begin(), vec.end(), cmp);
        for(int i = 0; i < k; i++){
            output.push_back(vec[i].second);
        }
        return output;
        
    }
};