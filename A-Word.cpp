#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a,b;
    a=b=0;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i])) a++;
        else b++;
    }
    if(a>b)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}
