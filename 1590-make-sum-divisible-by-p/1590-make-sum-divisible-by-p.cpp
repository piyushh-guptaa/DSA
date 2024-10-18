class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int total = 0;
        for(int num : nums){
            total = (total+num) % p;
        }
        int target = total % p;
        if(target == 0) return 0;
        
        unordered_map<int, int> map;
        map[0] = -1;
        int curr = 0, minLen = n;
        for(int i = 0; i < n; i++){
            curr = (curr+nums[i]) % p;
            
            int needed = (curr-target + p) % p;
            if(map.find(needed)!=map.end()){
                minLen = min(minLen, i - map[needed]);
            }
            map[curr] = i;
        }
        return minLen == n ? -1 : minLen;
    }
};