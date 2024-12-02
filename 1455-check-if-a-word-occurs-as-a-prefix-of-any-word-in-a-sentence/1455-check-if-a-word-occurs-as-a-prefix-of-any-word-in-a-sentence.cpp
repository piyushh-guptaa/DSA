class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        int start = 0;
        int wordCount = 0;
        for (int i = 0; i <= sentence.size(); i++) {
            if (i == sentence.size() || sentence[i] == ' ') { 
                words.push_back(sentence.substr(start, i - start)); 
                start = i + 1;
                wordCount++;
            }
        }
        for(int i = 0; i < words.size(); i++){
            string word = words[i];
            if(searchWord[0] == word[0]){
                int n = searchWord.length();
                if(word.substr(0,n) == searchWord){
                    return i+1;
                }
            }
        }


    return -1;
    }
};