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
        ll n;
        string s;
        cin>>n>>s;
        ll r=0,g=0,b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
            else if(s[i]=='G')
            {
                g++;
            }
            else
            {
                b++;
            }
        }
        if((r+g)==0 || (r+b)==0 || (g+b)==0)
        {
            cout<<s[0]<<endl;
        }
        else if(r==0 || g==0 || b==0)
        {
            if(r==0)
            {
                if(g>1 && b>1)
                {
                    cout<<"BGR"<<endl;
                }
                else if(g>1 && b==1)
                {
                    cout<<"BR"<<endl;
                }
                else if(g==1 && b>1)
                {
                    cout<<"GR"<<endl;
                }
                else
                {
                    cout<<"R"<<endl;
                }
            }
            else if(g==0)
            {
                if(r>1 && b>1)
                {
                    cout<<"BGR"<<endl;
                }
                else if(r>1 && b==1)
                {
                    cout<<"BG"<<endl;
                }
                else if(r==1 && b>1)
                {
                    cout<<"GR"<<endl;
                }
                else
                {
                    cout<<"G"<<endl;
                }
            }
            else if(b==0)
            {
                if(g>1 && r>1)
                {
                    cout<<"BGR"<<endl;
                }
                else if(g>1 && r==1)
                {
                    cout<<"BR"<<endl;
                }
                else if(g==1 && r>1)
                {
                    cout<<"BG"<<endl;
                }
                else
                {
                    cout<<"B"<<endl;
                }
            }
        }
        else
        {
            cout<<"BGR"<<endl;
        }

    }
}
