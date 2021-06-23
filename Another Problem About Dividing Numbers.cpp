///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll primefector(int n)
{
    int sum=0;
    while(n%2==0)
    {
        sum++;
        n/=2;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            sum++;
            n/=i;
        }
    }
    if(n>1)
    {
        sum++;
    }
    return sum;
}
int main()
{
    FastRead
    int t=1;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        if(k>=70)
        {
            cout<<"NO"<<endl;
        }
        else if(k==1)
        {
            if(a>b)
            {
                swap(a,b);
            }
            int gcd=__gcd(a,b);
            if(gcd==a && a!=b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int d=primefector(a);
            int d1=primefector(b);
            int ans=d+d1;
            if(ans>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
