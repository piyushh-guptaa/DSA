#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        while(l < r){
            int lh = height[l];
            int rh = height[r];
            int mh = min(lh, rh);
            int len = r - l;
            int currArea = mh * len;
            ans = max(currArea, ans);
            if(lh < rh){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};