#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll cnt=0;
    for(ll i=1; i<n;i++)
    {
        if(a[i]>=a[i-1]) continue;
        cnt+=abs(a[i]-a[i-1]);
        a[i]=a[i-1];
    }
    cout<<cnt;
}