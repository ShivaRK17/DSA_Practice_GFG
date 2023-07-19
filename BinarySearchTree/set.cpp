#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(6);
    cout<<*s.lower_bound(6);
    // cout<<(s.upper_bound(6)==s.end());
    return 0;
}