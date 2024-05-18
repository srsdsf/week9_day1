#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n>>m;
    multiset<ll> ml;
    for(int i=0; i<n; i++)
    {
        ll h;
        cin>>h;
        ml.insert(h);
    }
    for(int i=0; i<m; i++)
    {
        ll r;
        cin>>r;
        auto it=ml.upper_bound(r);
        if(ml.begin()==it)
        {
            cout<<"-1";
        }
        else
        {
            cout<<*(--it)<<endl;
            ml.erase(it);
        }
    }
}