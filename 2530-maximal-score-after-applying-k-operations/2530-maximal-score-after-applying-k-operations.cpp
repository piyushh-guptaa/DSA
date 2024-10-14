class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> pq;
        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
        }
        while(k != 0){
            int top = pq.top();
            score += top;
            pq.pop();
            double a = (double)top/3;
            pq.push(ceil(a));
            k--;    
        }
        return score;
    }
};
