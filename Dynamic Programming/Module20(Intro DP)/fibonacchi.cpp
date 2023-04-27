/*
     Author : Mahedi-Hasan10
     Date : 27-04-2023
     Topic: Recap Fibonacchi using recursion
*/
#include <bits/stdc++.h>
using namespace std;
long long ara[101];
long long fib(long long n)
{
    if (n <= 2)
        return 1;
    if (ara[n] != 0)
    {
        return ara[n];
    }
    ara[n] = fib(n - 1) + fib(n - 2);
    return ara[n];
}
int main()
{
    long long n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
