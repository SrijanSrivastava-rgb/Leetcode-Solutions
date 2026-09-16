class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //     unordered_map<int, int> mpp;

    //     mpp[0] = 1;

    //     int prefixSum = 0;
    //     int cnt = 0;

    //     for(int i = 0; i<nums.size(); i++){
    //         prefixSum += nums[i];

    //     int required = prefixSum-k;

    //     if(mpp.find(required) != mpp.end()){
    //         cnt += mpp[required];
    //     }
    //     mpp[prefixSum]++;
    // }
    // return cnt;

        // int n = nums.size();
        // int cnt = 0;

        // for(int i = 0; i<n; i++){
        //     for(int j = i; j<n; j++){
        //         int sum = 0;
        //         for(int x = i; x<= j; x++){
        //             sum += nums[x];
        //         }
        //         if(sum == k) cnt++;
        //     }
        // }
        // return cnt;

        int n = nums.size();
        int cnt = 0;

        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                    sum += nums[j];
                
                if(sum == k) cnt++;
            }
        }
        return cnt;
    }
};