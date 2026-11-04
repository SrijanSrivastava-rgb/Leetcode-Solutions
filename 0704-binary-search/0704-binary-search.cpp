// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low = 0;
//         int high = n-1;

//         while(low <= high){
//             int mid = (low + high)/2;
//             if(nums[mid] == target){
//                 return mid;
//             }
//             else if(target > nums[mid]){
//                 low = mid + 1;
//             }
//             else high = mid - 1;
//         }
//         return -1;
     
//     }
// };

class Solution {
private:
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        // Base case: Search space is exhausted
        if (left > right) {
            return -1;
        }

        // Prevent potential integer overflow
        int mid = left + (right - left) / 2;

        // Target found
        if (nums[mid] == target) {
            return mid;
        }
        
        // Target is smaller, search the left half
        if (nums[mid] > target) {
            return binarySearch(nums, target, left, mid - 1);
        }
        
        // Target is larger, search the right half
        return binarySearch(nums, target, mid + 1, right);
    }

public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};
