#include <bits/stdc++.h>
using namespace std;

void printBoundary(vector<vector<int>> v)
{
    if (v.size() == 1)
    {
        for (int i = 0; i < v[0].size(); i++)
        {
            cout<<v[0][i]<<" ";
        }
    }
    else if (v[0].size() == 1)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i][0]<<" ";
        }
    }
    else
    {
        for (int i = 0; i < v[0].size(); i++)
        {
            cout << v[0][i] << " ";
        }
        for (int i = 1; i < v.size(); i++)
        {
            cout << v[i][v[0].size() - 1] << " ";
        }
        for (int i = v[0].size() - 2; i >= 0; i--)
        {
            cout << v[v.size() - 1][i] << " ";
        }
        for (int i = v.size() - 2; i > 0; i--)
        {
            cout << v[i][0] << " ";
        }
    }
}

int main()
{
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // vector<vector<int>> v = {{1, 2, 3, 4}};
    printBoundary(v);
    return 0;
}