#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    s[0]=toupper(s[0]);
    cout<<s<<endl;
    return 0;
}
/**for(int i=1; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
        else s[i]=toupper(s[i]);
    }*/
