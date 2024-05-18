#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,t;
    cin>>n>>t;
    vector<pair<ll,int>> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n;i++)
    {
       ll x=t-a[i].first;
       for(int j=i+1,k=n-1; j<k; j++)
       {
            while(a[j].first+a[k].first>x) k--;
            if(j<k && a[j].first+a[k].first==x)
            {
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second<<endl;
                return 0;
            }
       }
    }
    cout<<"IMPOSSIBLE"<<endl;
}