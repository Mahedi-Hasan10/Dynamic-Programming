/*
     Author : Mahedi-Hasan10
     Date : 20-05-2023
     Topic: https://cses.fi/problemset/task/1638
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
int dp[1001][1001];

int countPathsMemo(int x, int y, vector<string> &grid)
{
    if (x < 0 || y < 0 || grid[x][y] == '*')
        return 0;
    if (x == 0 && y == 0)
        return 1;
    if (dp[x][y] != -1)
        return dp[x][y];
    int ans = (countPathsMemo(x - 1, y, grid) + countPathsMemo(x, y - 1, grid)) % N;
    dp[x][y] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    memset(dp, -1, sizeof(dp));
    cout << countPathsMemo(n - 1, n - 1, grid) << endl;
    return 0;
}