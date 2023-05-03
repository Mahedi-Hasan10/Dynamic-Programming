/*
     Author : Mahedi-Hasan10
     Date : 29-04-2023
     Topic: Solving fibonacchi using Tabulation Method (Iterative)
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int dp[N];
int main()
{
    int n;
    cin >> n;

    // base case
    dp[1] = 1;
    dp[2] = 1;

    // loop through the states
    for (int i = 3; i <= n; i++)
    {
        // calculate the answer from smaller sub problems
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << "\n";

    return 0;
}