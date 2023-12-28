// Better Solution

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};


// Brute Force

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int m = x;
//         int ans =0;

//         while (m!=0){
//             int digit = m % 10;

//              if((ans > INT_MAX/10) || (ans< INT_MIN/10) ){
//                 return false;
//             }

//             ans = (ans *10) + digit;
//             m = m/10;

//         }

//         if (( ans == x ) && (ans >= 0)){
//             return true;
//         }

//         else{
//             return false;
//         }
//     }
// };