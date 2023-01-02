#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,xa,c=0;
    cin>>n;
    cin>>x;
    vector <int>v;
    list <int> xli;
    for(int i=0; i<x; i++)
    {
        cin>>xa;
        xli.push_back(xa);
    }
    cin>>y;
    list <int> yli;
    for(int i=0; i<y; i++)
    {
        cin>>xa;
        yli.push_back(xa);
    }
    if(x==0 && y==0)
    {
        cout<<"Oh, my keyboard!";
        return 0;
    }
    xli.merge(yli);
    xli.sort();
    xli.unique();
    for(auto it:xli)
    {
        v.push_back(it);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==i+1) c++;
    }
    if(c!=n) cout<<"Oh, my keyboard!";
    else cout<<"I become the guy.";
}
