class Solution {
public:
    bool isOdd(int num){
        if(num % 2 == 0){
            return false;
        }
        return true;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() < 3){
            return false;
        }
        for(int i = 0; i < arr.size()-2; i++){
            if(isOdd(arr[i])){
                if(isOdd(arr[i+1])){
                    if(isOdd(arr[i + 2])){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};