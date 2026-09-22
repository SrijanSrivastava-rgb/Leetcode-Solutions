class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> ans;

        // for(int i = 0; i < nums.size(); i++){
        //     ans.push_back(nums[i]*nums[i]);           
        // }
        // sort(ans.begin(), ans.end());
        // return ans;
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n-1;
        int pos = n-1;
        while(left <= right){
            int leftSquare = nums[left]*nums[left];
            int rightSquare = nums[right]*nums[right];
            if(leftSquare > rightSquare){
                ans[pos] = leftSquare;
                left++;
            }
            else {
                ans[pos] = rightSquare;
                right--;
            }
            pos--;
        }
        return ans;
    }
};