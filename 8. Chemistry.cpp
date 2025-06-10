#include <bits/stdc++.h>
#define ll long long
#define hi ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define in(j,n,v) for(int i=j; i<n; i++) cin>> v[i];
#define out(j,n,v) for(int i=j; i<n; i++) cout<< v[i]<<" ";
#define mp(x, y) make_pair(x, y)
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define test int t; cin >> t; while (t--)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define rvs(v) reverse(v.begin(), v.end());
#define F first
#define S second
#define ld long double
using namespace std;
int main()
{
   test
   {
       int n, k;
       cin>>n>> k;
       string s;
       cin>> s;
       map< char, int > m;
       for(int i=0; i<n; i++)
       {
           m[s[i]]++;
       }
       if((n-k)%2==0)
       {
           int odd=0;
           for(auto it=m.begin(); it!=m.end(); it++)
           {
               if(it->S %2==1)
                odd++;
           }
           if(odd>k)
           {
               no
               continue;
           }else
           {
               if((k-odd)%2==0)
               {
                   yes
                   continue;
               }else
               {
                   no
                   continue;
               }
           }
       }else
       {
           int odd=0, first_odd=0;
           for(auto it=m.begin(); it!=m.end(); it++)
           {
               if(it->S %2==1 )
                odd++;
           }
           odd--;
           if(odd>k)
           {
               no
               continue;
           }else
           {
               if((k-odd)%2==0)
               {
                   yes
                   continue;
               }else
               {
                   no
                   continue;
               }
           }
       }
   }
}
