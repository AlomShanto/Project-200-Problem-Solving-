///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long  long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    queue< pair<ll,ll>>q1,q23;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(i%2==j%2)
            {
                q1.push({i+1,j+1});
            }
            else
            {
                q23.push({i+1,j+1});
            }
        }
    }
    n*=n;
    while(n--)
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            if(q23.size()>0)
            {
                cout<<2<<" "<<q23.front().first<<" "<<q23.front().second<<endl;
                cout.flush();
                q23.pop();
            }
            else
            {
                cout<<3<<" "<<q1.front().first<<" "<<q1.front().second<<endl;
                cout.flush();
                q1.pop();
            }
        }
        else if(a==2)
        {
            if(q1.size()==0)
            {
                cout<<3<<" "<<q23.front().first<<" "<<q23.front().second<<endl;
                cout.flush();
                q23.pop();
            }
            else
            {
                cout<<1<<" "<<q1.front().first<<" "<<q1.front().second<<endl;
                cout.flush();
                q1.pop();
            }
        }
        else
        {
            if(q1.size()==0)
            {
                cout<<2<<" "<<q23.front().first<<" "<<q23.front().second<<endl;
                cout.flush();
                q23.pop();
            }
            else
            {
                cout<<1<<" "<<q1.front().first<<" "<<q1.front().second<<endl;
                cout.flush();
                q1.pop();
            }
        }
    }
}
