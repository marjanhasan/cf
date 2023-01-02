#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    if(1<=n && 1<=m && 1<=a && n<=10e9 && m<=10e9 && a<=10e9)
    {
        cout<<((m+a-1)/a)*((n+a-1)/a);
    }
    return 0;
}
