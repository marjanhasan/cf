#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if((q-p)>=2 && p<q) a++;
    }
    cout<<a;
}
