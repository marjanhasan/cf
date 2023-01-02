#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout<<s;
    list <string> str;
    for(auto it:s)
    {
        str.push_back(s);
    }
    str.sort();
    str.unique();
    for(auto it : str)
    {
        cout<<it<< " ";
    }
    cout<<endl;
}
