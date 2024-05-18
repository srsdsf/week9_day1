#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int matrix[n+5][n];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        map<int,int> mp;
        map<int,int> mp1;
        for(int i=1; i<=n; i++)
        {
            mp[matrix[i][n-1]]=i;  //last a ja val gula aceh ay val gula map ar modhhe rakhchi
            mp1[matrix[i][n-1]]++;  // and cnt korchi kotober aceh

        }
        int indx=0,val;
        for(auto v: mp1)
        {
            if(v.second==1) indx=v.first;  //ja val ta akber aceh seta index ar moddhe rekhe disi
            else val=v.first;
        }
        for(int i=1; i<n; i++)
        {
            cout<<matrix[mp[indx]][i]<<" ";  //jeta akber aceh setar row print korchi
        }
        cout<<val<<endl;

    }

}
