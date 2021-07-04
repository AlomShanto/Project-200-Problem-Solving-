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
        ll arr[2*n+10];
        ll even=0,odd=0;
        for(int i=0; i<2*n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==even)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
