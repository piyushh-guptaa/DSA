class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int num : nums){
            arr.push_back(to_string(num));
        }
        sort(arr.begin(), arr.end(), [](string &a, string &b){
           return (b+a) < (a+b);
        });
        
        if(arr[0] == "0"){
            return "0";
        }
        
        string output="";
        for(string s : arr){
            output+=s;
        }
        return output;
    }
};