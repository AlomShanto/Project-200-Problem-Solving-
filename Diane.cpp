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
        if(n==1)
        {
            cout<<"a"<<endl;
        }
        else if(n==2)
        {
            cout<<"ab"<<endl;
        }
        else if(n==3)
        {
            cout<<"abc"<<endl;
        }
        else if(n%2==0)
        {
            ll d=n/2;
            for(int i=1; i<d; i++)
            {
                cout<<"a";
            }
            cout<<"b";
            for(int i=1; i<=d; i++)
            {
                cout<<"a";
            }
            cout<<endl;
        }
        else
        {
            ll d=(n-1)/2;
            for(int i=1; i<d; i++)
            {
                cout<<"a";
            }
            cout<<"b";
            for(int i=1; i<=d; i++)
            {
                cout<<"a";
            }
            cout<<"c";
            cout<<endl;
        }
    }
}
