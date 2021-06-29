///BISMILLAHIR-RAHAMNIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    FastRead
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        ll mark=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(sum<=0)
            {
                mark=1;
            }
        }
        if(mark==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sum=0;
            for(int i=n-1; i>=0; i--)
            {
                sum+=arr[i];
                if(sum<=0)
                {
                    mark=1;
                }
            }
            if(mark==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}
