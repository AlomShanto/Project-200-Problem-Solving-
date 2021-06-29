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
        int n;
        cin>>n;
        int arr[n+10];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int d=arr[i]-i%arr[i];
            if(d==0)
            {
                d=arr[i];
            }
           // cout<<d<<endl;
            for(int j=d; j<=n; j+=arr[i])
            {
                //cout<<arr[i]<<" "<<arr[j]<<" "<<i<<endl;
                if(j==i)
                {
                    continue;
                }
                else if((arr[i]*arr[j])==(i+j))
                {
                    ans++;
                }
            }
        }
        cout<<ans/2<<endl;
    }
}
