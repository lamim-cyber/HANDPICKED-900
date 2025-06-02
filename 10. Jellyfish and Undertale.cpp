#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    test
    {
       ll a, b, n;
       cin>> a>> b>> n;
       vector< ll > v(n);
       for(int i=0; i<n; i++) cin>> v[i];
       ll sum=0;
       for(int i=0; i<n; i++)
       {
           if(v[i]+1 <= a)
            sum+=v[i];
           else
            sum+= (a-1);
       }
       sum+=b;
       cout<< sum<< endl;
    }
}
