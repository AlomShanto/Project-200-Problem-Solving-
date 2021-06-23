///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        ll mx=-1e18,mn=1e18,mark=-1,mark1=-1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]>mx)
            {
                mx=arr[i];
                mark=i;
            }
            if(arr[i]<mn)
            {
                mn=arr[i];
                mark1=i;
            }
        }
        ll ans1=min(max(mark,mark1)+1,n-min(mark,mark1));
        if(mark>mark1)
        {
            swap(mark,mark1);
        }
        ll ans2=mark+1+(n-mark1);
        ll ans=min(ans1,ans2);
        cout<<ans<<endl;
    }
}
