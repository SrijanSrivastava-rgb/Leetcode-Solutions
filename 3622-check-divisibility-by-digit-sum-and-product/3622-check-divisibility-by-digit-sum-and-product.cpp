class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, prod=1;
        int num = n;
        while(n>0){
            sum+= n%10;
            prod*=n%10;
            n /= 10;
        }
        int total = sum+prod;
        if(num%total == 0) return true;
        else return false;
    }
};