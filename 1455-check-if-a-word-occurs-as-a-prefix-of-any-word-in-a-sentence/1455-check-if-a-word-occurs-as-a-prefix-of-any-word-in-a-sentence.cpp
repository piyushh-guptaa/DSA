class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordIndex = 1;
        int i = 0, j = 0;

        while (i < sentence.size()) {
            if (sentence[i] == ' ') {
                wordIndex++;
                i++;
                j = 0;
            } else if (j < searchWord.size() && sentence[i] == searchWord[j]) {
                j++;
                i++;
                if (j == searchWord.size()) {
                    return wordIndex;
                }
            } else {
                while (i < sentence.size() && sentence[i] != ' ') {
                    i++;
                }
                j = 0;
            }
        }
        return -1;
    }
};
