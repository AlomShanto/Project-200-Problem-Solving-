///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    ll ans=108*n;
    ans/=100;
    if(ans<206)
    {
        cout<<"Yay!"<<endl;
    }
    else if(ans==206)
    {
        cout<<"so-so"<<endl;
    }
    else
    {
        cout<<":("<<endl;
    }
}

