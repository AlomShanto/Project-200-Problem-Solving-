///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 100000
vector<ll>v[mx+10];
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        vector<ll>v,v1,ans,ans1;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                v.push_back(arr[i]);
            }
            else
            {
                v1.push_back(arr[i]);
            }
        }
        srt(v);
        srt(v1);
        ll j=0,k=0;
        for(ll i=0; i<n; i++)
        {
            if(i%2==0)
            {
                ans.push_back(v[j++]);
            }
            else
            {
                ans.push_back(v1[k++]);
            }
        }
        ans1=ans;
        srt(ans);
        if(ans==ans1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
