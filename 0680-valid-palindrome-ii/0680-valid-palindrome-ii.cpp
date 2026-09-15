class Solution {
public:

    bool isPalindrome(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;    
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right){
            if(s[left] != s[right]) {
                if(isPalindrome(s, left+1, right)) return true;
                if(isPalindrome(s, left, right-1)) return true;
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}; 