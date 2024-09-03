class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        
        for(char c : s) {
            int val = c - 'a' + 1;
            str += to_string(val);
        }

        while(k > 0) {
            int sum = 0;
            
            for(char c : str) {
                sum += c - '0';
            }
            
            str = to_string(sum);
            k--;
        }

        return stoi(str);
    }
};
