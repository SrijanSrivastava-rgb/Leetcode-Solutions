class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // unordered_map<int, int> mpp;
        // for(int i=0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        //     vector<int> ans;
        // }
        // for(auto it : mpp){
        //     if(it.second == 1) {
        //         return it.first;
        //     }
        //     ans.push_back(it.first);
        // }
        // return ans;

        long long XORR = 0;
        for(int num : nums){
            XORR ^= num;
        }
        int rightMost = XORR & -XORR;
        int b1=0, b2=0;

        for(int num : nums){
            if(num & rightMost){
                    b1 ^= num;
                }
                else{
                    b2 ^= num;
                }
            }
        return {b1, b2};
    }
};