class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> map;
        int change = 0;
        for(int bill : bills){
            int change = bill - 5;
            if(change == 5){
                if(map[5] == 0){
                    return false;  
                }else{
                    map[5]--;    
                } 
            }else if(change == 15){
                if(map[5] >= 1 && map[10] >= 1){
                    map[5]--;
                    map[10]--;
                }else if(map[5] >= 3){
                    map[5] += -3;
                }else{
                    return false;
                }
            }
            map[bill]++;
        }
        return true;
    }
};