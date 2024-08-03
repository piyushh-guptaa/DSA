class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> countTarget, countArr;
        for (int num : target) {
            countTarget[num]++;
        }
        for (int num : arr) {
            countArr[num]++;
        }
        return countTarget == countArr;
    }
};
