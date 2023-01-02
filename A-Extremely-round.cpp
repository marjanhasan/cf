#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<10) cout<<n<<endl;
        else if(n<101) cout<<(9+(n/10))<<endl;
        else cout<<(9+(n/10)-1)<<endl;
        //9*(s.length()-1)+(s[0]-'0')
    }
}
