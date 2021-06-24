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
        ll n,k;
        cin>>n>>k;
        string s,s1="";
        cin>>s;
        char ch=s[0];
        vector< pair<string,int> >v;
        for(int i=0; i<n; i++)
        {
            if(s[i]<=ch)
            {
                s1+=s[i];
            }
            else
            {
                break;
            }
        }
        string s3="";
        for(int i=s1.length()-1; i>0; i--)
        {
            s3+=s[i];
            if(s[i]==ch)
            {
                reverse(s3.begin(),s3.end());
                v.push_back({s3,i});
                reverse(s3.begin(),s3.end());
            }
        }
        ll mark=-1;
        for(int i=0; i<v.size(); i++)
        {
            string s4=v[i].first;
            ll cnt=0;
            //cout<<s4<<" "<<s1<<endl;
            for(int j=0; j<s4.length(); j++)
            {
                if(s4[j]>s1[j])
                {
                    mark=v[i].second;
                    break;
                }
                else if(s4[j]==s1[j])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            //cout<<cnt<<" XX "<<endl;
            if(cnt==s4.length())
            {
                mark=v[i].second;
            }
        }
        if(mark>=0)
        {
            s3="";
            for(int i=0; i<mark; i++)
            {
                s3+=s1[i];
            }
            s1=s3;
        }
        //cout<<s1<<endl;
        while(s1.length()<k)
        {
            string s2;
            s2=s1+s1;
            s1=s2;
        }
        for(int i=0; i<k; i++)
        {
            cout<<s1[i];
        }
        cout<<endl;
    }
}
