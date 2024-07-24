class Solution {
public:
    int convertNumber(int num, vector<int>& mapping) {
        if (num == 0) return mapping[0];
        int newNum = 0;
        int place = 1;
        while (num != 0) {
            int digit = num % 10;
            newNum = mapping[digit] * place + newNum;
            num /= 10;
            place *= 10;
        }
        return newNum;
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> parray;
        for (int i : nums) {
            int newNum = convertNumber(i, mapping);
            parray.push_back({i, newNum});
        }  
        sort(parray.begin(), parray.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
        vector<int> output;
        for (const auto& p : parray) {
            output.push_back(p.first);
        }
        return output;
    }
};
