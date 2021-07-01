///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    ll ar[50]={0};
    ll arr[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==4)
        {
            ar[4]++;
        }
        else if(arr[i]==8)
        {
            if(ar[4]<=ar[8])
            {
                continue;
            }
            else
            {
                ar[8]++;
            }
        }
        else if(arr[i]==15)
        {
            if(ar[8]<=ar[15])
            {
                continue;
            }
            else
            {
                ar[15]++;
            }
        }
        else if(arr[i]==16)
        {
            if(ar[15]<=ar[16])
            {
                continue;
            }
            else
            {
                ar[16]++;
            }
        }
        else if(arr[i]==23)
        {
            if(ar[16]<=ar[23])
            {
                continue;
            }
            else
            {
                ar[23]++;
            }
        }
        else if(arr[i]==42)
        {
            if(ar[23]<=ar[42])
            {
                continue;
            }
            else
            {
                ar[42]++;
            }
        }
    }
    ll mn=min(ar[4],min(ar[8],min(ar[15], min(ar[16],min(ar[23],ar[42])))));
    cout<<n-mn*6<<endl;
}

