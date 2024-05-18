#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    unordered_map<char,ll> mp;
    for(char c: s)
    {
        mp[c]++;
    }
    ll cnt=0;
    char ch;
    for(auto x: mp)
    {
        if(x.second%2)
        {
            ch=x.first;
            cnt++;
        }
    }
    if((s.size()%2==0 && cnt>0) || cnt>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        string ans=" ";
        for(auto x: mp)
        {
            for(int i=1; i<=x.second/2; i++)
            {
                ans+=x.first;
            }
            
        }
        cout<<ans;
        if(s.size()%2)
            cout<<ch;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
}