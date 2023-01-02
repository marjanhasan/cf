#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y=x/5;
    int z=x%5;
    if(z>0) y+=1;
    cout<<y;
    return 0;
}
