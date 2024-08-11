class Solution {
public:
    long long helper(vector<int>& piles, int h) {
        long long sum = 0; // Use long long to avoid overflow
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            sum = sum + ceil((double)piles[i] / (double)h);
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            if (helper(piles, mid) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
