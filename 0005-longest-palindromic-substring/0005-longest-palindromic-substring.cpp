class Solution {
public:
    int expandFromCentre(string s, int i, int j){
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }
        return j - i - 1; 
    }
    
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        for(int i = 0; i < s.length(); i++){
            int len1 = expandFromCentre(s, i, i);    
            int len2 = expandFromCentre(s, i, i+1);  
            int len = max(len1, len2);
            if(len > (end - start)){
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1); 
    }
};
