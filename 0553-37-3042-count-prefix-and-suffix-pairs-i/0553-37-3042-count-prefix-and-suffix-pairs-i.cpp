class Solution {
public:

    bool isPrefixAndSuffix(string &str1, string &str2){
        int n1 = str1.length();
        int n2 = str2.length();
        if(str2.substr(0, n1) == str1 && str2.substr(n2-n1, n2)==str1){
            return true;
        }
        return false;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for(int i = 0; i < words.size();i++){
            for(int j = i+1; j < words.size(); j++){
                if(words[i].length() > words[j].length()) continue;
                if(isPrefixAndSuffix(words[i], words[j])) cnt++;
            }
        }
        return cnt;
    }
};