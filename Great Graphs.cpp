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
        ll ans[n+10]={0};
        ll value[n+10]={0};
        ll prev[n+10]={0};
        ll comu[n+10]={0};
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            //cout<<"XX"<<endl;
            sort(arr,arr+n);
            for(int i=2; i<n; i++)
            {
                //cout<<i<<endl;
                if(i==2)
                {
                    ans[i]=(arr[i]*(-1));
                    value[i]=ans[i];
                    comu[i]+=value[i]+comu[i-1];
                }
                else if(i==3)
                {
                    comu[i]=value[i-1]+comu[i-1]+(arr[i-1]-arr[i])*(i-2)+arr[i-2]-arr[i];
                    value[i]=comu[i]-comu[i-1];
                }
                else
                {
                    comu[i]=value[i-1]+comu[i-1]+(arr[i-1]-arr[i])*(i-2)+arr[i-2]-arr[i];
                    value[i]=comu[i]-comu[i-1];
                }
                //cout<<comu[i-1]<<" "<<comu[i]<<" xx "<<" "<<value[i]<<endl;
                //cout<<ans[i]<<" ";
            }
            cout<<comu[n-1]<<endl;
        }
    }
}
