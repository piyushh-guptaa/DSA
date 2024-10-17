class Solution {
public:
    int maximumSwap(int num) {
        vector<int> nums;
        int org = num;
        while(num!=0){
            int n = num % 10;
            nums.push_back(n);
            num = num / 10;
        }
        int n = nums.size()-1;
        reverse(nums.begin(), nums.end());
        int maxElement = nums[n];
        int maxElementIndex = n;
        int idx1 = -1;
        int idx2 = -1;
        for(int i = n; i >= 0; i--){
            if(nums[i] > maxElement){
                maxElement = nums[i];
                maxElementIndex = i;
            }else if(nums[i] < maxElement){
                idx1 = i;
                idx2 = maxElementIndex;
            }
        }
        if(idx1 == -1){
            return org;
        }
        int temp = nums[idx1];
        nums[idx1] = nums[idx2];
        nums[idx2] = temp;
        int ans = 0;
        for(int i : nums){
            ans = ans * 10 + i;
        }
        return ans;
    }
};