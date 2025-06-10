#include <bits/stdc++.h>
#define ll long long
#define test int t; cin >> t; while (t--)
using namespace std;
int main()
{
    test
    {
        ll n, k, x;
        cin>> n>> k>> x;
        ll high=0, low=0;
        low= (k*(k+1))/2;

//  counted the high and low i can get by adding k distinct element

        for(int i=n; k--; i--) high+=i;
        if( x>=low && x<=high)
            yes
            else
                no
            }
}
