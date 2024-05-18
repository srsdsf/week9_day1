#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll cnt=0;
    map<ll,int> mp;
    mp[0]++;
    for(int i=0; i<n;i++)
    {
        sum+=a[i]%n;
        sum=(sum+n)%n;
        cnt+=mp[sum];
        mp[sum]++;
    }
    cout<<cnt;
}