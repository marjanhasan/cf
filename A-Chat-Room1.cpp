#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="hello";
    int x=0,y=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[x])
        {
            x++;
            y++;
        }
    }
    if(y==5) cout<<"YES";
    else cout<<"NO";
}
