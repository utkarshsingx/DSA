class Solution {
public:
    bool isPalindrome(int x) {
        int m = x;
        int ans =0;

        while (m!=0){
            int digit = m % 10;

             if((ans > INT_MAX/10) || (ans< INT_MIN/10) ){
                return false;
            }

            ans = (ans *10) + digit;
            m = m/10;

        }

        if (( ans == x ) && (ans >= 0)){
            return true;
        }

        else{
            return false;
        }
    }
};