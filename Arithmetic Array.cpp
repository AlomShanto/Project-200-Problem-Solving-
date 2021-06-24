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
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        ll avg=sum/n;
        if(avg<1)
        {
            cout<<1<<endl;
        }
        else if(sum==n)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<sum-n<<endl;
        }
    }
}
