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
        ll n,m,k;
        cin>>n>>m>>k;
        ll d=(m/2)*n;
        ll to=(m*n)/2;
        ll d1=n-k%n;
        ll d2=m/2;
        ll mark=0;
        if(k>d)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(n==1 && (k*2!=m))
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(n==1 && (k*2==m))
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            if(n%2==1)
            {
               ll d3=m/2;
               if(k%2==1 && k>=d3 && k<=to && to%2==1)
               {
                   mark=1;
               }
               else if(k%2==0 && k>=d3 && k<=to && to%2==0)
               {
                   mark=1;
               }
            }
            else
            {
               ll d3=m/2;
               if(k%2==0)
               {
                   mark=1;
               }
            }
        }
        if(mark==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
