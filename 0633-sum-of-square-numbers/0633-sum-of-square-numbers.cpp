class Solution {
public:
    bool judgeSquareSum(int c) {
        long long maxSqr = sqrt(c);
        long long l = 0, r = maxSqr;
        while (l <= r) {
            long long ans = l * l + r * r;
            if (ans > c) {
                r--;
            } else if (ans < c) {
                l++;
            } else {
                return true;
            }
        }
        return false;
    }
};