class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        int second = nums[n] * nums[n - 1];
        int first = nums[0] * nums[1];
        return second - first;
    }
};