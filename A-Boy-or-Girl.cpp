#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s1+=s[i];
        int a=0;
        for(int j=0; j<s1.size(); j++)
        {
            if(s1[j]==s[i]) a++;
            if(a>1) s1.pop_back();
        }
    }
    if(s1.size()%2==0) cout<< "CHAT WITH HER!\n";
    else cout<< "IGNORE HIM!\n";
    return 0;
}

