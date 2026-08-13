class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result;
        vector<string> words;

        // extract each word using stringstream (auto skips whitespace)
        while (ss >> word) {
            words.push_back(word);
        }

        // build result by joining words in reverse order
        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i != 0) result += " ";
        }

        return result;
    }
};