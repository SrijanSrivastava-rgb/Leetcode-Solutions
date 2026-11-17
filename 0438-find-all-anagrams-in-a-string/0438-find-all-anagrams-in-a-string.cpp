class Solution {
public:
    bool allZero(vector<int>& count) {
        for (int &x : count) {
            if (x != 0) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        int n = s.size();
        
        if (k > n) return {};

        vector<int> count(26, 0);
        for (char &ch : p) {
            count[ch - 'a']++;
        }

        int i = 0, j = 0;
        vector<int> result; // Changed from int to vector<int>

        while (j < n) {
            int idx = s[j] - 'a';
            count[idx]--;

            if (j - i + 1 == k) {
                if (allZero(count)) {
                    result.push_back(i); // Store starting index 'i' instead of incrementing
                }
                count[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        
        return result;
    }
};
