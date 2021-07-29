///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+10]={0};
        for(int i=1; i<=n; i++)
        {
            arr[i]=k;
        }
        vector< pair<char,ll>>v;
        while(k--)
        {
            char ch;
            ll ki;
            cin>>ch>>ki;
            v.push_back({ch,ki});
            if(ch=='L')
            {
                for(int i=1; i<ki; i++)
                {
                    arr[i]--;
                }
            }
            else
            {
                for(int i=ki+1; i<=n; i++)
                {
                    arr[i]--;
                }
            }

        }
        srt(v);
        for(int i=0; i<v.size(); i++)
        {
            arr[v[i].second]=1;
        }
        ll ans=1;
        for(int i=1; i<=n; i++)
        {
            //cout<<arr[i]<<" ";
            ans*=arr[i];
            ans%=998244353;
        }
        cout<<ans<<endl;
    }
}

