class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> mySet;
        mySet.insert(nums.begin(), nums.end());
        if(mySet.size() == n) return false;
        return true;
    }
};