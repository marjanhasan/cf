#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int> reg;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(reg[s]==0)
        {
            cout<<"OK\n";
            reg[s]++;
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
}
