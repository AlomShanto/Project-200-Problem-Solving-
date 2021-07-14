///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        ll mx=1;
        ll ans[n+10]={1};
        for(int i=1; i<=n; i++)
        {
            ll cnt=1;
            for(int j=i+i; j<=n; j+=i)
            {
                if(arr[j]>arr[i])
                {
                    ans[j]=max(ans[i]+1, ans[j]);
                }
            }
            mx=max(ans[i]+1,mx);

        }
        cout<<mx<<endl;
    }
}
