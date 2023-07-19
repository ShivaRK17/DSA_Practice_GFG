#include <bits/stdc++.h>
using namespace std;

int hoarePart(vector<int> &v, int l, int h)
{
    int piv = v[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (v[i] < piv);
        do
        {
            j--;
        } while (v[j] > piv);
        if (i >= j)
        {
            return j;
        }
        swap(v[i], v[j]);
    }
    return 0;
}

// void quickSort(vector<int> &v, int l, int h)
// {
//     if (l < h)
//     {
//         int piv = hoarePart(v, l, h);
//         quickSort(v, l, piv);
//         quickSort(v, piv+1, h);
//     }
// }
void quickSort(vector<int> &v, int l, int h)
{
    begin:
    if (l < h)
    {
        int piv = hoarePart(v, l, h);
        quickSort(v, l, piv);
        l = piv+1;
        goto begin;
    }
}

int main()
{
    vector<int> v = {5, 4, 7, 2, 9, 12, 1, 3, 2};
    quickSort(v, 0, v.size() - 1);
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}