#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
        ll y,x;
        cin>>y>>x;
        if(y>x)
        {
            if(y%2)
            {
                cout<<(y-1)*(y-1)+ 1 +(x-1)<<endl;
            }
            else
            {
                cout<<y*y-(x-1)<<endl;
            }
        }
        else
        {
            if(x%2)
            {
                cout<<x*x-(y-1)<<endl;
                
            }
            else
            {
                cout<<(x-1)*(x-1)+ 1 +(y-1)<<endl;
            }
        }
   }
}