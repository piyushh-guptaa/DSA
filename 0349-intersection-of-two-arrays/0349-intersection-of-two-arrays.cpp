class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        unordered_map<int, bool> map;
        for(int i = 0; i < nums1.size(); i++){
            map[nums1[i]] = true;
        }
        for(int i = 0;i < nums2.size(); i++){
            if(map.count(nums2[i]) && map[nums2[i]] == true){
                output.push_back(nums2[i]);
                map[nums2[i]] = false;
            }
        }
        return output;
        
    }
};