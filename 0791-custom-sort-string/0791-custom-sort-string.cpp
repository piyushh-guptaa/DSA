
class Solution {
public:
    std::string customSortString(std::string order, std::string s) {
        std::vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }

        std::string output = "";
        for (char c : order) {
            while (count[c - 'a']-- > 0) {
                output += c;
            }
        }

        for (int i = 0; i < 26; i++) {
            while (count[i]-- > 0) {
                output += 'a' + i;
            }
        }

        return output;
    }
};
