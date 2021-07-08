///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    string s;
    cin>>s;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]==s[i-1])
        {
            if((i+1)<s.length())
            {
                if(s[i-1]!='a' && s[i+1]!='a')
                {
                    s[i]='a';
                }
                else if(s[i-1]!='b' && s[i+1]!='b')
                {
                    s[i]='b';
                }
                else
                {
                    s[i]='c';
                }
            }
            else
            {
                if(s[i-1]=='a')
                {
                    s[i]='b';
                }
                else
                {
                    s[i]='a';
                }
            }
        }
    }
    cout<<s<<endl;
}
