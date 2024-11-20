class Solution {
public:
    int takeCharacters(string s, int k) {
        unordered_map<int, int> map;
        int n = s.length();
        int l = 0, r = 0;
        int ca=0, cb=0,cc=0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'a') ca++;
            else if(s[i] == 'b') cb++;
            else if(s[i] == 'c') cc++;
        }
        if(ca < k || cb < k || cc < k) return -1;
        int ans = n;
        int a = 0, b = 0, c = 0;
        while(r < n){
            if(s[r] == 'a') a++;
            if(s[r] == 'b') b++;
            if(s[r] == 'c') c++;
            r++;
            while(a > ca- k || b > cb-k || c > cc-k){
                if(s[l] == 'a') a--;
                if(s[l] == 'b') b--;
                if(s[l] == 'c') c--;
                l++;
            }
            ans = min(ans, n - (r - l));
        }
        return ans;
        
        
    }
};