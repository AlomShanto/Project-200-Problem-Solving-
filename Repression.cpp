///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll mn=min(a,min(b,c));
    cout<<a+b+c-mn<<endl;
}

