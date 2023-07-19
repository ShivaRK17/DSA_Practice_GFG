#include <bits/stdc++.h>
using namespace std;

int trailZero(int n)
{
    int ans = 0;
    int x = 5;
    for (int i = 1; x <= n; i++)
    {
        ans += floor(n / x);
        x = x * 5;
    }
    return ans;
}

int main()
{
    int n = 10;
    cout << trailZero(n);
    return 0;
}