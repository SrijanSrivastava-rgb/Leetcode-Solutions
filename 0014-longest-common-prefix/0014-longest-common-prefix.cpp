class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int j = 0; j < strs[0].length(); j++) {
            char currentChar = strs[0][j];  // reference character le rahe hain first string se

            for (int i = 1; i < strs.size(); i++) {
                // bounds check: agar current string itni chhoti hai ki index j exist hi nahi karta
                if (j >= strs[i].length() || strs[i][j] != currentChar) {
                    return strs[0].substr(0, j);
                }
            }
        }
        return strs[0]; // agar poora pehla string hi common prefix nikla
    }
};