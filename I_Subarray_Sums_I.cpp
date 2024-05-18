#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,s;
    cin>>n>>s;
    map<ll,ll>mp;
    ll cnt=0,sum=0;
    mp[sum]=1;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        sum+=x;
        if(mp[sum-s]) cnt++;
        mp[sum]=1;
    }
    cout<<cnt<<endl;
}