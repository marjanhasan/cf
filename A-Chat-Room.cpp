#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int H,E,L,L2,O;
    H=E=L=L2=O=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if( s[i]== 'h')
        {
            t+=s[i];
            H++;
            if(H>1)
            {
                t.pop_back();
            }
        }
        if( s[i]== 'e')
        {
            t+=s[i];
            E++;
            if(E>1)
            {
                t.pop_back();
            }
        }
        if( s[i]== 'l')
        {
            t+=s[i];
            L++;
            if(L>2)
            {
                t.pop_back();
            }
        }
        if( s[i]== 'o')
        {
            t+=s[i];
            O++;
            if(O>1)
            {
                t.pop_back();
            }
        }

    }
    if("hello"==t) cout<< "YES";
    else cout<< "NO";
}
