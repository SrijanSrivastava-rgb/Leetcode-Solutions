class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // int cnt = 0;

        // for(int i = 0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j = i; j<nums.size(); j++){
        //         sum += nums[j];
        //         if(sum % k == 0) cnt++;
        //     }
        // }
        // return cnt;
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int result = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
            int rem = sum % k;
            if(rem < 0){
                rem += k;
            }
            if(mp.find(rem) != mp.end()){
                result += mp[rem];
            }
            mp[rem]++;
        }
        return result;
    }
};