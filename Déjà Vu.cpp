///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define rev(s) reverse(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        //cin>>n;
        string s,s1;
        cin>>s;
        ll mark=0,cnt=0,cnt1=0;
        for(int i=0; i<s.length(); i++)
        {
            cnt++;
            if(s[i]!='a')
            {
                mark=1;
                break;
            }
        }
        cnt--;
        rev(s);
        for(int i=0; i<s.length(); i++)
        {
            cnt1++;
            if(s[i]!='a')
            {
                mark=1;
                break;
            }
        }
        cnt1--;
        if(mark==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            rev(s);
            //cout<<cnt<<" "<<cnt1<<endl;
            if(cnt>=cnt1)
            {
                cout<<"a"<<s<<endl;
            }
            else
            {
                cout<<s<<"a"<<endl;
            }
        }
    }
}
