#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    list <int> a;
    for(int i=0; i<4; i++)
    {
        cin>>in;
        a.push_back(in);
    }
    a.sort();
    a.unique();
    cout<<4-a.size();
}
