#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
using namespace std;
int main()
{
    test
    {
        int n, x;
        cin>> n>> x;
        vector< ll > v(n);
        for(int i=0; i<n; i++)
        {
            cin>> v[i];
        }
 
        ll sum=accumulate(v.begin(), v.end(), 0ll);
        sum=(sum+x-1)/x;
 
        ll sum2=0;
        for(int i=0; i<n; i++)
        {
            sum2+=(v[i]+x-1)/x;
        }
 
        cout<< min(sum, sum2)<< " "<< max(sum, sum2)<< endl;
    }
}
