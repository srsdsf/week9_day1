#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int start=0;
    set<int> s;
    int cnt=0;
    for(int i=0; i<n;i++)
    {
       while(s.count(a[i]))
       {
        s.erase(a[start]);
        start++;
       }
       s.insert(a[i]);
       cnt=max(cnt,(int)s.size());
    }
    cout<<cnt<<endl;
}