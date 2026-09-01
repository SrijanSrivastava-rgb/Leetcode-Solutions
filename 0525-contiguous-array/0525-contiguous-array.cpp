class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mpp;

        int sum = 0;
        int max_len = 0;

        mpp[0] = -1;

        for(int i = 0; i< nums.size(); i++){
            sum += (nums[i] == 0) ? -1:1;

            if(mpp.find(sum) != mpp.end())
                max_len = max(max_len, i - mpp[sum]);
            else mpp[sum] = i;    
        }
        return max_len;
    }
};