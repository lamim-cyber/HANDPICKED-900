#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    test
    {
       string s;
       cin>> s;
       int zero=0,  one=0;
       for(int i=0; i<s.size(); i++)
       {
           if(s[i]=='0')
            zero++;
           else
            one++;
       }
 
 
           int x=min(zero, one);
           if(x%2==0)
            cout<< "NET"<< endl;
           else
            cout<< "DA"<< endl;
 
    }
}
