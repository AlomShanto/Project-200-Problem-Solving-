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
        ll ar[n+10];
        ll sum=0,sum1=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        ll d=n/4;
        d=n-d;
        sort(arr,arr+n);
        sort(ar,ar+n);
        reverse(arr,arr+n);
        reverse(ar,ar+n);
        for(int i=0; i<d; i++)
        {
            sum+=arr[i];
            sum1+=ar[i];
        }
        ll cnt=0;
        if(sum>=sum1)
        {
            cout<<cnt<<endl;
        }
        else
        {
            ll d1=d;
            d1--;
            for(int i=1; i<=2*n; i++)
            {
                sum+=100;
                sum1+=0;
                cnt++;
                if((n+i)%4>0 && d<n)
                {
                    sum1+=ar[d];
                    d++;
                }
                if((n+i)%4==0 && d1>=0)
                {
                    sum-=arr[d1];
                    d1--;
                }
                else if((n+i)%4==0 && d1<0)
                {
                    sum-=100;
                }
                if(sum>=sum1)
                {
                    break;
                }
            }
            cout<<cnt<<endl;
        }
    }
}
