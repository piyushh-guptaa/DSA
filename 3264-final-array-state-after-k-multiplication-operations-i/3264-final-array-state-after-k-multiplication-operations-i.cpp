class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int minimum = INT_MAX;
        int minIndex = -1;
        for(int i = 0; i < k; i++){
            for(int j = 0; j < nums.size();j++){
                if(nums[j] < minimum){
                    minimum = nums[j];
                    minIndex = j;
                }
            }
            nums[minIndex] = minimum * multiplier;
            minimum=INT_MAX;
        }
        return nums;
    }
};