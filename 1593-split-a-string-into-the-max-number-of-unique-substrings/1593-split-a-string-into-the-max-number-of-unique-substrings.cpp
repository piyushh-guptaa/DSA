class Solution {
public:
    int maxCount = 0;
    
    void helper(string s, set<string>& set, int index) {
        int n = s.length();
        if(index == s.length()) {
            maxCount = max(maxCount, (int)set.size());
            return;
        }
        for(int i = index; i < n; i++) {
            string sub = s.substr(index, i - index + 1);
            if(set.find(sub) == set.end()) {
                set.insert(sub);
                helper(s, set, i + 1);
                set.erase(sub);
            }
        }
    }

    int maxUniqueSplit(string s) {        
        set<string> set;
        helper(s, set, 0);
        return maxCount;
    }
};
