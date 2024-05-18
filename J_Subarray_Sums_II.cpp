#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0,cnt=0;
    map<ll,int> mp;
    mp[0]++;
    for(int i=0; i<n;i ++)
    {
        sum+=a[i];
        cnt+=mp[sum-m];
        mp[sum]++;
    }
    cout<<cnt<<endl;
}

