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
        ll n,k,ans=0;
        cin>>n>>k;
        for(ll i=0; i<n; i++)
        {
            cout<<(ans^i)<<endl;
            cout.flush();
            ans^=(ans^i);
            ll ok;
            cin>>ok;
            if(ok)
            {
                break;
            }
        }
    }
}

