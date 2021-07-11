///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 100000
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+10]={0};
        ll ar[n+10]={0};
        ll tem[n+10]={0};
        for(int i=1; i<=k; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=k; i++)
        {
            ll a;
            cin>>a;
            tem[arr[i]]=a;
            ar[arr[i]]=1;
        }
        //cout<<tem[1]<<endl;
        ll d;
        for(int i=1; i<=n; i++)
        {
            if(tem[i]>0)
            {
                d=i;
                break;
            }
        }
        ll mn=tem[d],d1;
        d1=d;
        for(int i=d-1; i>0; i--)
        {
            tem[i]=tem[i+1]+1;
        }
        for(int i=n; i>0; i--)
        {
            if(tem[i]>0)
            {
                d=i;
                break;
            }
        }
         mn=tem[d];
        for(int i=d+1; i<=n; i++)
        {
            tem[i]=tem[i-1]+1;
        }
        mn=tem[d1];
        for(int i=d1+1; i<=n; i++)
        {
            if(ar[i]==1 && i!=1)
            {
                tem[i]=min(tem[i],tem[i-1]+1);
                mn=tem[i];
            }
            else if(tem[i]==0)
            {
                tem[i]=tem[i-1]+1;
            }
            else
            {
                tem[i]=min(tem[i],tem[i-1]+1);
                mn=tem[i];
            }
        }
        mn=tem[d];
        for(int i=d-1; i>0; i--)
        {
            if(ar[i]==1 && i!=n)
            {
                tem[i]=min(tem[i],tem[i+1]+1);
                mn=tem[i];
            }
            else if(tem[i]==0)
            {
                tem[i]=tem[i+1]+1;
            }
            else
            {
                tem[i]=min(tem[i],tem[i+1]+1);
                mn=tem[i];
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<tem[i]<<" ";
        }
        cout<<endl;
    }
}
