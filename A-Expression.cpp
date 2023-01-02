#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e1,e2,e3,e4;
    vector <int>v;
    cin>>a>>b>>c;

    e1=a+b+c;
    v.push_back(e1);
    e2=a*(b+c);
    v.push_back(e2);
    e3=a*b*c;
    v.push_back(e3);
    e4=(a+b)*c;

    v.push_back(e4);
    sort(v.begin(),v.end());
    cout<<v[3];
}
