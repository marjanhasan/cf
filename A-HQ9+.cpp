#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== 'H' || s[i]== 'Q' || s[i]== '9')
        {
            a++;
        }
    }
    if(a>0) cout<< "YES\n";
    else cout<< "NO\n";
}
