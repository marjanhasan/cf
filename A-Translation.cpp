#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,a;
    cin>>s>>t;
    for(int i=s.size()-1; i>=0; i--)
    {
        a+=s[i];
    }
    if(a==t) cout<< "YES";
    else cout<< "NO";
}
