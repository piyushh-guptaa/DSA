class Solution {
public:
    void subsetHelper(vector<int>& nums, int startIndex, vector<vector<int>>& output) {
        int n = nums.size();
        if (startIndex == n) {
            output.push_back({});
            return;
        }

        subsetHelper(nums, startIndex + 1, output);
        int smallSize = output.size();
        for (int i = 0; i < smallSize; i++) {
            output.push_back(output[i]);
            output.back().push_back(nums[startIndex]);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        subsetHelper(nums, 0, output);
        return output;
    }
};
