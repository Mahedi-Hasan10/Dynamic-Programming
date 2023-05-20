/*
     Author : Mahedi-Hasan10
     Date : 20-05-2023
     Topic: Convert adjacency matrix to adjacency List
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> adjList[N];
int main()
{
    int row = 7, col = 7;
    int adjMatrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> adjMatrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (adjMatrix[i][j] != 0)
            {
                adjList[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        cout << i << " == ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
