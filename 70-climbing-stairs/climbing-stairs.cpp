
class Solution {
public:
    int climbStairs(int n) {
        int no_of_ways = 1;

        for (int i = 1; i <= n / 2; i++) {
            double sum = 1;

            for (int j = i; j < 2 * i; j++) {
                sum *= (double)(n - j) / (j - i + 1);
            }

            no_of_ways +=sum;
        }

        return no_of_ways;
    }
};

