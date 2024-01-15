class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> output;
        unordered_map<int, int> win, loss;
        vector<int> winners, oneLoss;
        for (int i = 0; i < matches.size(); i++) {
            win[matches[i][0]]++;
            loss[matches[i][1]]++;
        }
        set<int> winset;
        for(auto ele : win){
            if(!loss.count(ele.first)){
                winset.insert(ele.first);
            }
        }
        
        for(auto ele : loss) {
            if (ele.second == 1) {
                oneLoss.push_back(ele.first);
            }
        }
        sort(oneLoss.begin(), oneLoss.end());
        for(auto ele : winset){
            winners.push_back(ele);
        }
        
        output.push_back(winners);
        output.push_back(oneLoss);
        return output;
    }
};