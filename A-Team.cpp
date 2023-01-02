#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,f=0,s;
    cin>>n;
    if(1<=n && n<=1000)
    {
        while(n--)
        {
            c=0;
            for(int i=1; i<=3; i++)
            {
                cin>>s;
                if(s>0) c++;
            }
            if(c>=2) f++;
        }
        cout<<f<<endl;
    }
    return 0;
}
