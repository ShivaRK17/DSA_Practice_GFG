#include <bits/stdc++.h>
using namespace std;

int gcddiff(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
        cout << a << " " << b << endl;
    }
    return a;
}
//  gcd(a,b) = gcd(a,a-b) if a>b
//           = gcd(b,b-a) if b>a

int gcdmod(int a, int b)
{
    cout<<a<<" "<<b<<endl;
    if(b==0){
        return a;
    }
    return gcdmod(b,a%b);
}

// if (b == 0) {
//         return a;
//     }
// return gcd(b, a % b);

int main()
{
    // cout << gcddiff(25, 76);
    cout << gcdmod(24, 78);
    return 0;
}

// while(a>0 && b>0){
//     if(a==0){
//         return b;
//     }
//     if(b==0){
//         return a;
//     }
//     if(a>b){
//         a = a-b;
//     }
//     else{
//         b = b-a;
//     }
// }
// return a;
