///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 100000
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        ll d=abs(x1-x2)+abs(y1-y2);
        if((x1==x2 && x1==x3))
        {
            if((y3>y1 && y3<y2)|| (y3>y2 && y3<y1))
            {
                d+=2;
            }
        }
        else if((y1==y2 && y1==y3))
        {
            if((x3>x1 && x3<x2)|| (x3>x2 && x3<x1))
            {
                d+=2;
            }
        }
        cout<<d<<endl;
    }
}
