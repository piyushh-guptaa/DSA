class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = intervals.size();
        for(int i = 0; i < n; i++) {
            mini = min(mini, intervals[i][0]);
            maxi = max(maxi, intervals[i][1]);
        }
        vector<int> events(maxi + 2, 0);
        for(int i = 0; i < n; i++) {
            events[intervals[i][0]]++;
            events[intervals[i][1] + 1]--;
        }
        int ans = 0;
        int current = 0;
        for(int i = mini; i <= maxi; i++) {
            current += events[i];
            ans = max(ans, current);
        }
        return ans;
    }
};
