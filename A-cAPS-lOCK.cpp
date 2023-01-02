#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(islower(a[0])) a[0]=toupper(a[0]);
    for(int i=1; i<a.size(); i++)
    {
        if(isupper(a[i])) a[i]=tolower(a[i]);
    }
    cout<<a<<endl;
}
