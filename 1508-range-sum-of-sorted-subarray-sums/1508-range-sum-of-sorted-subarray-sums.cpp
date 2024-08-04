class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> output;
        
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum+=nums[j];
                output.push_back(sum);
            }
        }
        sort(output.begin(), output.end());
        left--;
        long long add = 0;
        const int mod = 1e9 + 7;
        for(int i = left; i < right; i++){
            add=(add+output[i])%mod;
        }
        return add;
        
    }
};