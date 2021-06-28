///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    ll arr[n+10];
    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll mx=0;
    for(int i=1; i<=n; i++)
    {
        ll one=0,zero=0;
        for(int j=i; j<=n; j++)
        {
            if(arr[j]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
            mx=max(mx,(zero-one));
        }
    }
    if(sum==n)
    {
        cout<<sum-1<<endl;
        return 0;
    }
    //cout<<sum<<" "<<mx<<endl;
    cout<<sum+mx<<endl;
}
