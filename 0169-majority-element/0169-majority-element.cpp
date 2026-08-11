class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int element = nums[0];
        // int count = 1;

        // for(int i =1;i<nums.size(); i++){
        //     if(count == 0){
        //         element = nums[i];
        //         count = 1;
        //     }
        //     else if(nums[i] == element){
        //         count++;
        //     }
        //     else count--;
        // }
        // return element;

        unordered_map<int, int> m;
        int n = nums.size();

        for(int i : nums){
            m[i]++;

        if(m[i] > n/2) return i;    
        }
        return -1;
    }
};