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
        ll d=-1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1 && d==-1)
            {
                d=i;
            }
        }
        if(d>=0)
        swap(arr[d],arr[n-1]);
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

