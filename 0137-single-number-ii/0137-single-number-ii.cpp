class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second == 1) return it.first;
        // }
        // return -1;

        //Bitwise - optimal approach 
        int ans = 0;
        for(int bit=0; bit<32; bit++){
            int cnt = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] & (1<<bit)){
                    cnt++;
                }
            }
            if(cnt % 3 == 1) {
                ans = ans | (1<<bit);
            }
        }
        return ans;
    }
};