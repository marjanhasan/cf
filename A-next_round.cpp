#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,j=0;
    cin>>n>>k;
    int a[n];
    if(1<=k && k<=n && n<=50)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(1<=a[i] && a[i]<=100 && a[i]>=a[k-1]) j++;
        }
        cout<<j<<endl;
    }
    return 0;
}
