///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3])
        {
            cout<<"Weak"<<endl;
        }
        else
        {
            ll d=s[0]-'0';
            ll d1=s[1]-'0';
            ll d2=s[2]-'0';
            ll d3=s[3]-'0';
            //cout<<d<<" "<<d1<<" "<<d2<<" "<<d3<<endl;
            if(d1==(d+1)%10 && d2==(d1+1)%10 && d3==(d2+1)%10)
            {
                cout<<"Weak"<<endl;
            }
            else
            {
                cout<<"Strong"<<endl;
            }
        }
    }
}

