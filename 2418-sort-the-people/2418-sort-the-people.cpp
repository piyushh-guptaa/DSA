class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> parray;
        for(int i = 0; i < names.size(); i++){
            parray.push_back(std::make_pair(names[i],heights[i]));
        }
        auto comparator = [](const std::pair<string,int>& p1, const std::pair<string, int>& p2){
            return p1.second > p2.second;
        };
        sort(parray.begin(), parray.end(), comparator);
        vector<string> output;
        for(auto i : parray){
            output.push_back(i.first);
        }
        return output;
    }
};