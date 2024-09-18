class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> output;
        unordered_map<string, int> map;
        string str = "";
        auto processString = [&](string s) {
            string word = "";
            for (char c : s) {
                if (c == ' ') {
                    if (!word.empty()) {
                        map[word]++;
                        word = ""; 
                    }
                } else {
                    word += c;
                }
            }
            if (!word.empty()) { 
                map[word]++;
            }
        };
        processString(s1);
        processString(s2);
        for (auto &i : map) {
            if (i.second == 1) {
                output.push_back(i.first);
            }
        }
        return output;
    }
};
