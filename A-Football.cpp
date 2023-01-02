#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a,b;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== '0')
        {
            a=0;
            for(int j=i; j<i+7; j++)
            {
                if(s[j]== '0') a++;
                else break;
            }
            if(a>=7) break;
        }
        else
        {
            b=0;
            for(int j=i; j<i+7; j++)
            {
                if(s[j]== '1') b++;
                else break;
            }
            if(b>=7) break;
        }
    }
    if(a>=7 || b>=7) cout<< "YES";
    else cout<< "NO";


    return 0;
}
