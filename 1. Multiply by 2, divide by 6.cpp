#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    test
    {
        ll n;
        cin>> n;
        int a=0;
        bool flag=true;
        while(n>1)
        {
            if(n%6==0)
                {
                    n/=6;
                    a++;
                }
            else
            {
                if(n%3==0)
                {
                    n*=2;
                    a++;
                }else
                {
 
                    flag=false;
                    break;
                }
            }
        }
 
        if(flag)
            cout<< a<< endl;
        else
            cout<< "-1"<< endl;
 
    }
}
