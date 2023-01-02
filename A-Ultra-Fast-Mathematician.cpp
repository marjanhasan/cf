#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2,s3;
    cin>>s>>s2;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s2[i]) s3.push_back('1');
        else s3.push_back('0');
    }
    cout<<s3;
}
