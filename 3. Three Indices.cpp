#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    test
    {
        int n;
        cin>> n;
        vector< int > v(n);
        for(int i=0; i<n; i++)
        {
            cin>> v[i];
        }
        int x=0, a, b, c;
        for(int i=0; i<n; i++)
        {
            bool left=false , right=false;
            for(int k=0; k<i; k++)
            {
                if(v[k]<v[i])
                {
                    a=k+1;
                    left=true;
                    break;
                }
            }
 
            for(int j=i+1; j<n; j++)
            {
                 if(v[j]<v[i])
                {
                    b=j+1;
                    right=true;
                    break;
                }
            }
 
            if(left && right)
            {
                c=i+1;
                x=true;
                break;
            }
        }
 
        if(x)
         {
             yes
 
             cout<< a<< " "<<c<< " "<< b<< endl;
         }
         else
         no

    }
}
