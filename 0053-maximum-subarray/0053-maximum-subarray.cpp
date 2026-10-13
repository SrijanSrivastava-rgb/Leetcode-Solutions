class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
                sum += nums[i];
            
            if(sum > maxi){
                maxi = sum;
                
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;

        int n = nums.size();
        int maxSum = INT_MIN;

        for(int i=0; i<n; i++){
                int currentSum = 0;
            for(int j=i; j<n; j++){
                currentSum += nums[j];
                if(currentSum > maxSum){
                    maxSum = currentSum;
                }
            }
        }
        return maxSum;
    }
};