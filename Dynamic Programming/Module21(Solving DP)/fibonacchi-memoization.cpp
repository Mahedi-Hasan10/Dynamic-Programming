/*
     Author : Mahedi-Hasan10
     Date : 29-04-2023
     Topic: Solving Fibonacchi using memoization method(recursive)
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int dp[N];

int fib(int n)
{
    // base case
    if (n <= 2)
        return 1;

    // check if the current state is alreay solved
    if (dp[n] != -1)
        return dp[n];
    // calculate the answer from smaller sub problem
    int ans = fib(n - 1) + fib(n - 2);
    dp[n] = ans;

    return ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << fib(n) << "\n";
    return 0;
}