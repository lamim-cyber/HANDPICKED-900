#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
int main()
{
    test
    {
       int n, k;
       cin>> n>> k;
       vector< int > v;
       for(int i=0; i<(n*k); i++)
       {
           int x;
           cin>> x;
           v.pb(x);
       }
       srt(v)
       ll sum=0;
       int l=n*k;
       int m=(n/2)+1;
       l=l-m;
       while(k--)
       {
           sum+=v[l];
           l-=m;
       }
 
       cout<< sum<< endl;
 
    }
}
