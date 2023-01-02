#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0) cout<<"-"<<(n/2)+1;
    else cout<<n/2;
}

/*
long long n,a=0;
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        if(i%2!=0) a-=i;
        else a+=i;
    }
    cout<<a;
*/
