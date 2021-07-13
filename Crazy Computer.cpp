///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        ll arr[n+10];
        ll cnt=1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                if((arr[i]-arr[i-1])>c)
                {
                    cnt=1;
                }
                else
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
