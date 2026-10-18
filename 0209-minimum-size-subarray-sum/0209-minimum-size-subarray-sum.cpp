class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int n = nums.size();
        // int left = 0, right = 0;
        // int sum = 0;
        // int minLen = INT_MAX;

        // while(right<n){
        //     sum += nums[right];

        //     if(sum > target){
        //         sum -= nums[left];
        //         left = left + 1;
        //     }
        //     if(sum <= target){
        //         minLen = min(minLen, right - left + 1);
        //     }
        //     right = right + 1;
        // }
        // return minLen == INT_MAX ? 0 : minLen;

        int left = 0, sum = 0;
        int minLen = INT_MAX;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            while(sum >= target){
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};