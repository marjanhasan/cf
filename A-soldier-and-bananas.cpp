#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,a=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        a+=k*i;
    }
    if(a>n) cout<<a-n;
    else cout<<0;
}
