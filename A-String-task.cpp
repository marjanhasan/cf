#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' )
            s[i]=0;
        else
        {
            s1+= '.';
            s1+=s[i];
        }
    }
    cout<<s1;
    return 0;
}
