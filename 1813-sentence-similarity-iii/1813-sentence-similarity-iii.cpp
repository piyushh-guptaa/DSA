class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.length()>sentence2.length()){
            swap(sentence1,sentence2);
        }
        vector<string>v1,v2;
        string temp="";
        for(int i=0;i<sentence1.length();i++){
            if(sentence1[i]==' '){
                v1.push_back(temp);
                temp="";
            }
            else{
                temp+=sentence1[i];
            }
        }
        v1.push_back(temp);

        temp="";
         for(int i=0;i<sentence2.length();i++){
            if(sentence2[i]==' '){
                v2.push_back(temp);
                temp="";
            }
            else{
                temp+=sentence2[i];
            }
        }
        v2.push_back(temp);
        int i=0;
        while(i<v1.size() && v1[i]==v2[i]){
            i++;
        }
        int j=v1.size()-1;
        int k=v2.size()-1;
        while(j>=0 && v1[j]==v2[k]){
            j--;
            k--;
        }
        if(i==v1.size()){
            return true;
        }
        if(j==-1){
            return true;
        }
        if(i>=j+1){
            return true;
        }
        return false;
    }
};