class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string output = "";
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j < spaces.size() && i == spaces[j]) { 
                output += ' ';
                j++;
            }
            output += s[i];
        }
        return output;
    }
};
