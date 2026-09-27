class Solution {
public:
    bool canJump(vector<int>& nums) {
        // if (nums.size() == 0) return false;
        // for(int x : nums){
        //     if(x == 0) return false;
        // }
        // return true;

        int maxi = 0;
        for(int i=0; i<nums.size(); i++){
            if(i > maxi) return false;
            maxi = max(maxi, i + nums[i]);
        }
        return true;
    }
};