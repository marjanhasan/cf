#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, countt=1, maxcount=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<countt<<"\n";
        return 0;
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<=a[i+1])
        {
            countt++;
        }
        else countt=1;
        if(countt>maxcount) maxcount=countt;
    }
    cout<<maxcount;
    return 0;
}

/**
6
2 2 1 3 4 1

1) have to increase the count value if,
income increases or equal from yesterday.
otherwise,
count will be assigned as one.

2) and the value can be decreased
so we have to track the max row of count value
so we assign and update the count value into max count variable */
