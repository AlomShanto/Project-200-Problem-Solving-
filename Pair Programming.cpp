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
        ll k,n,m;
        cin>>k>>n>>m;
        ll arr[n+10];
        ll ar[m+10];
        ll exist[n+m+k+10]= {0};
        for(int i=0; i<k; i++)
        {
            exist[i]=1;
        }
        ll ans[n+m+10]= {0};
        ll cnt=0,cnt1=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>ar[i];
        }
        ll d=0,d1=k,flag=0;
        vector<ll>v;
        while(d<(m+n))
        {
            ll mark=0,mark1=0;
            for(ll i=cnt; i<n; i++)
            {
                if(arr[i]==0)
                {
                    v.push_back(arr[i]);
                    exist[d1]++;
                    d1++;
                    d++;
                    mark=1;
                    if(i==n-1)
                    {
                        cnt=n;
                    }
                }
                else
                {
                    if(exist[arr[i]-1]==1)
                    {
                        v.push_back(arr[i]);
                        d++;
                        mark=1;
                        if(i==n-1)
                        {
                            cnt=n;
                        }
                    }
                    else
                    {
                        cnt=i;
                        break;
                    }
                }
            }
            for(ll i=cnt1; i<m; i++)
            {
                //cout<<"XX"<<endl;
                if(ar[i]==0)
                {
                    v.push_back(ar[i]);
                    exist[d1]++;
                    d1++;
                    d++;
                    mark1=1;
                    if(i==m-1)
                    {
                        cnt1=m;
                    }
                }
                else
                {
                    if(exist[ar[i]-1]==1)
                    {
                        v.push_back(ar[i]);
                        d++;
                        mark1=1;
                        if(i==m-1)
                        {
                            cnt1=m;
                        }
                    }
                    else
                    {
                        cnt1=i;
                        break;
                    }
                }
            }
            if(mark==0 && mark1==0 && d<(n+m))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
