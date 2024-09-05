class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> output;
        int totalLen = rolls.size() + n;
        int sum = 0;
        for(int i : rolls){
            sum += i;
        }
        
        int totalSum = totalLen * mean;
        int nSum = totalSum - sum;
        
        if(nSum < n || nSum > n * 6) {
            return {};
        }
        
        int eachSum = nSum / n;
        int remainder = nSum % n;
        
        for(int i = 0; i < n; i++) {
            if (i < remainder) {
                output.push_back(eachSum + 1);
            } else {
                output.push_back(eachSum);
            }
        }
        
        return output;
    }
};
