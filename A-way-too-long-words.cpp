#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(1<=t && t<=100)
    {
        while(t--)
        {
            string w;
            cin>>w;
            if(w.size()>10)
            {
                cout<<w[0]<<w.size()-2<<w[w.size()-1]<<endl;
            }
            else cout<<w<<endl;
        }
    }
    return 0;
}
