class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        int teams = skill.size() / 2;
        unordered_map<int, int> map;
        for (int i : skill) {
            sum += i;
            map[i]++;
        }
        if (sum % teams != 0) return -1;
        int target = sum / teams;
        long long res = 0;
        for (int i : skill) {
            if (map[i] == 0) {
                continue;
            }
            map[i]--;
            int partner = target - i;
            if (map[partner] <= 0) {
                return -1;
            }
            map[partner]--;
            res += (i * partner);
        }
        return res;
    }
};
