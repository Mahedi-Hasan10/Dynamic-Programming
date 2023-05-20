/*
     Author : Mahedi-Hasan10
     Date : 20-05-2023
     Topic:https://cses.fi/problemset/task/1638
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
int countPathsTab(int n, vector<string> &grid)
{
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    if (grid[0][0] == '*')
        return 0;
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (grid[0][i] == '*')
            dp[0][i] = 0;
        else
            dp[0][i] = dp[0][i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        if (grid[i][0] == '*')
            dp[i][0] = 0;
        else
            dp[i][0] = dp[i - 1][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (grid[i][j] == '*')
                dp[i][j] = 0;
            else
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % N;
        }
    }
    return dp[n - 1][n - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    cout << countPathsTab(n, grid) << endl;
    return 0;
}
