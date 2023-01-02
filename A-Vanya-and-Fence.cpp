#include<bits/stdc++.h>
using namespace std;
int main()
{
    int person, fence, a=0,n;
    cin>>person>>fence;
    while(person--)
    {
        cin>>n;
        if(fence<n) a+=2;
        else a+=1;
    }
    cout<<a;
}
