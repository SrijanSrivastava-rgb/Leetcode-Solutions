class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for(string num : strs){
            string sortedVersion = num;
            sort(sortedVersion.begin(), sortedVersion.end());
            map[sortedVersion].push_back(num);
        }
        vector<vector<string>> result;
        for(auto pair : map){
            result.push_back(pair.second);
        }
        return result;
    }
};