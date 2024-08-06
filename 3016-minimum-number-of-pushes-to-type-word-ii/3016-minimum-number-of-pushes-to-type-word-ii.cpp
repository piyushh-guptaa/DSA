class Solution {
public:
    int minimumPushes(string word) {
        vector<int> letters(26,0);
        for(char c : word){
            letters[c-'a']++;
        }
        sort(letters.begin(), letters.end(), greater<int>());
        int press=0;
        int count=0;
        for(int i = 0; i < letters.size(); i++){
            if(letters[i]==0) break;
            int val=letters[i]*((count/8)+1);
            press += val;
            count++;
        }
        return press;
        
    }
};