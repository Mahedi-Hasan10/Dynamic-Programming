/*
     Author : Mahedi-Hasan10
     Date : 04-05-2023
     Topic: CSES Minimizing Coins problem solution
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    vector<long long> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    vector<long long> dp(x + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }
    if (dp[x] == INT_MAX)
    {
        cout << "-1\n";
    }
    else
        cout << dp[x] << "\n";
    return 0;
}