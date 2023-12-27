#include <bits/stdc++.h>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int num1, num2;
    cout << "Enter number you want to add " << endl;
    cin >> num1 >> num2;
    int res = add(num1, num2);
    cout << "The addition of number 1 and number 2 is : " << res << endl;
    return 0;
}