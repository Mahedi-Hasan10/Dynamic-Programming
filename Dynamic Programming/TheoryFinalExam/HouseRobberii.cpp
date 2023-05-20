/*
     Author : Mahedi-Hasan10
     Date  : 20-05-2023
     Topic: https://leetcode.com/problems/house-robber-ii/description/
*/
#include <bits/stdc++.h>
using namespace std;

int Maxrob(int i, int target, vector<int> &nums, vector<int> &dp)
{
    if (i == target)
        return nums[i];
    if (i > target)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int ans1 = nums[i] + Maxrob(i + 2, target, nums, dp);
    int ans2 = Maxrob(i + 1, target, nums, dp);
    dp[i] = max(ans1, ans2);
    return dp[i];
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);
    if (n == 1)
        return nums[0];
    int ans1 = Maxrob(0, n - 2, nums, dp);
    int ans2 = Maxrob(1, n - 1, nums, dp);
    return max(ans1, ans2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << rob(v) << endl;
    return 0;
}