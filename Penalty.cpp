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
        string s;
        cin>>s;
        ll a=0,a1=0,b=0,b1=0;
        for(int i=0; i<s.length(); i++)
        {
            if(i%2==0)
            {
                if(s[i]=='?')
                {
                    a1++;
                }
                else if(s[i]=='1')
                {
                    a++;
                }
                ll d=(10-i-1)/2;
                ll d1=(10-i)/2;
                if((a+a1)>(b+d1))
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if((b+b1)>(a+d))
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if(i==8)
                {
                    cout<<10<<endl;
                    break;
                }
            }
            else
            {
                if(s[i]=='?')
                {
                    b1++;
                }
                else if(s[i]=='1')
                {
                    b++;
                }
                ll d=(10-i-1)/2;
                ll d1=d;
                if((a+a1)>(b+d1))
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if((b+b1)>(a+d))
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if(i==9)
                {
                    cout<<10<<endl;
                    break;
                }
            }
        }
    }
}
