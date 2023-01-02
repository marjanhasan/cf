#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a,b,c;
    cin>>s;

    for(int i=0; i<s.size(); i+=2)
    {
        if(s[i]=='1') a=a+s[i]+'+';
    }
    for(int i=0; i<s.size(); i+=2)
    {
        if(s[i]=='2') a=a+s[i]+'+';
    }
    for(int i=0; i<s.size(); i+=2)
    {
        if(s[i]=='3') a=a+s[i]+'+';
    }
    a.pop_back();
    cout<<a;
    return 0;
}

