#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    if(1<=n && n<=150)
    {
        while(n--)
        {
            string s;
            cin>>s;
            if(s[1]=='+') x++;
            else x--;
        }
        cout<<x<<endl;
    }
    return 0;
}
