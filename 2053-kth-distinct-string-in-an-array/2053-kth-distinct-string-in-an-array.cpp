class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        if(arr.size() < k) return "";
        unordered_map<string, int> map;
        for(int i = 0; i < arr.size(); i++){
            map[arr[i]]++;
        }
        for(int i = 0; i < arr.size(); i++){
            if(map[arr[i]] == 1){
                k--;
                if(k == 0){
                    return arr[i];
                }
            }
        }
        return "";
        
    }
};