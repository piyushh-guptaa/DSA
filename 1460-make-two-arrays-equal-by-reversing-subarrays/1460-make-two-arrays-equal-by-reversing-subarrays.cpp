class Solution {
public:
    bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
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
