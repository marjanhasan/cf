#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,total=0,s=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        total-=a;
        total+=b;
        if(total>s) s=total;
    }
    cout<<s;
}
