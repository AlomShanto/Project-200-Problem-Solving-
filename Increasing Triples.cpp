///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+10];
        ll b[n+10];
        ll c[n+10];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>c[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        sort(c,c+n);
        ll d=n-1,d1=n-1,d2=n-1;
        ll last=a[d];
        ll ans=0;
        ll mark=0,mark1=0;
        while(d1>=0)
        {
            last=c[d1];
            mark=0;
            mark1=0;
            //cout<<last<<" CH1 ";
            while(d>=0)
            {
                if(b[d]<last)
                {
                    mark=1;
                    last=b[d];
                    //cout<<last<<" CH2 ";
                    while(d2>=0)
                    {
                        //cout<<a[d2]<<" "<<endl;
                        if(a[d2]<last)
                        {
                            ans++;
                            mark1=1;
                        }
                        d2--;
                        if(mark1==1)
                        {
                            break;
                        }
                    }
                }
                d--;
                if(mark==1)
                {
                    break;
                }
            }
            d1--;
            if(mark==0 || mark1==0)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}

