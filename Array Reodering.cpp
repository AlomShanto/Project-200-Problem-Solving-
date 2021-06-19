///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define   FastRead   ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
/*const ll n=1e6,n1=1e6+10;
ll prime[n1+10]={0};
vector<ll>v;
void sieve()
{
    //ll x=sqrt(n);
    v.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(ll j=i*i; j<=n; j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
}*/
int main()
{
    FastRead;
    //sieve();
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        vector<ll>v,v1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                v.push_back(arr[i]);
            }
            else
            {
                v1.push_back(arr[i]);
            }
        }
        ll d=v.size();
        if(d==n)
        {
            cout<<n*(n-1)/2<<endl;
        }
        else
        {
            ll a=n-1;
            ll ans=(d*(2*a+(d-1)*(-1)))/2;
            srt(v1);
            for(int i=0; i<v1.size()-1; i++)
            {
                for(int j=i+1; j<v1.size(); j++)
                {
                    ll gcd=__gcd(v1[i],2*v1[j]);
                    if(gcd>1)
                    {
                        ans++;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}
