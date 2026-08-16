class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            int idx = i; 
            for(int j = i+1; j < n; j++){
                if(nums[j]< nums[idx]){
                    idx = j;
                }
            }
            int temp = nums[idx];
            nums[idx] = nums[i];
            nums[i] = temp;
        }
    }
};