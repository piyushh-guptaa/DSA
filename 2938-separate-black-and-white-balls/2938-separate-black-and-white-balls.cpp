class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        int n = s.length();
        int last = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') continue;
            else{
                ans+=i-last;
                last++;
            }
        }
        return ans;
    }
};