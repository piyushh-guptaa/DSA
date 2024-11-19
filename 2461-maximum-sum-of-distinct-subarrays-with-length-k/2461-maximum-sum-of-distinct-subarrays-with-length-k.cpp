class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long lastSum = 0;
        int left = 0, right;
        unordered_map<int, int> map;
        for(right = 0 ; right < k ; right++){
            map[nums[right]]++;
            lastSum+=nums[right];
        }
        while(right <= nums.size()){
            if(map.size() == k){
                sum = max(sum, lastSum);
            }
            if(left < nums.size()){
                map[nums[left]]--;
                if(map[nums[left]] == 0){
                    map.erase(nums[left]);
                }
                lastSum -= nums[left];
                left++;
            }
            if(right < nums.size()){
                map[nums[right]]++;
                lastSum += nums[right];
            }
            right++;  
        }
        return sum;
        
    }
};