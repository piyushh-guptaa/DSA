class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int a;
        int min;
        min=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(target>sum)
                    j++;
                else if(target<sum)
                    k--;
                else
                    return sum;
                
                if(abs(sum-target)<min)
                {
                    a=sum;
                    min=abs(target-sum);
                }
            }
        }
            return a;
    }
};