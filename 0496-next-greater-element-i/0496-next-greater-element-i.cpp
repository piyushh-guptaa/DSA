class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> output(nums1.size(),-1);
        for(int i = 0; i < nums2.size(); i++){
            map[nums2[i]] = i;
        }
        for(int i = 0; i < nums1.size(); i++){
            int idx = map[nums1[i]];
            for(int j = idx+1; j < nums2.size(); j++){
                if(nums2[j] > nums2[idx]){
                    output[i] = nums2[j];
                    break;
                }
            }
        }
        return output;
    }
};