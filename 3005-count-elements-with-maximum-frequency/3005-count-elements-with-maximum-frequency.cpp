class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        int max = -1;
        for(auto i : map){
            if(i.second > max){
                max = i.second;
            }
        }
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] == max){
                cnt++;
            }
        }
        return cnt;
    }
};