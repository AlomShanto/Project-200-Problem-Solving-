///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 200000
ll ar[mx+10];
int main()
{
    //FastRead
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll n,p,q;
        cin>>n>>p>>q;
        p--;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        reverse(arr,arr+n);
        ll sum=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(p<0)
            {
                break;
            }
            sum+=arr[i];
            ans++;
            if(arr[i]>q)
            {
                ans--;
                break;
            }
            if(sum>q)
            {
                if(p>0)
                {
                    sum-=arr[i];
                    ans--;
                    if(sum>0)
                    {
                        p--;
                        sum=arr[i];
                        if(i<=n-1 && p>=0)
                        {
                            ans++;
                        }
                    }
                }
                else
                {
                    sum-=arr[i];
                    ans--;
                    if(sum>0)
                    {
                        p--;
                        break;
                    }
                }
            }
            else
            {
                if(i==n-1)
                {
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
