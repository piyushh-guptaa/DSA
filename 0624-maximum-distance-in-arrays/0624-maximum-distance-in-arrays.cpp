class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int max_distance=0;
        int mini = arrays[0].front();
        int maxi = arrays[0].back();
        
        for(int i = 1; i < arrays.size(); i++){
            max_distance = max(max_distance, abs(arrays[i].back()-mini));
            max_distance = max(max_distance, abs(maxi-arrays[i][0]));
            
            maxi = max(maxi,arrays[i].back());
            mini = min(mini, arrays[i][0]);
        }
        return max_distance;                       
        }
};