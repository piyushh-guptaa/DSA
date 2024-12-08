#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        auto cmp = [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);

        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        int prevMax = 0, res = 0;

        for (const auto& event : events) {
            while (!pq.empty() && pq.top()[1] < event[0]) {
                prevMax = max(prevMax, pq.top()[2]);
                pq.pop();
            }
            res = max(res, prevMax + event[2]);
            pq.push(event);
        }

        return res;
    }
};
