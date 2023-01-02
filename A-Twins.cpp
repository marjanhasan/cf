#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum, sum2, add;
    sum=sum2=add=0;
    cin>>n;
    int c[n];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
        sum+=c[i];
    }
    sum/=2;
    sort(c,c+n);
    for(int i=n-1; i>=0; i--)
    {
        sum2+=c[i];
        add++;
        if(sum<sum2) break;
    }
    cout<<add<<endl;
}
