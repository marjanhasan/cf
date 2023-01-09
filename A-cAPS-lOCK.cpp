#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    bool isTrue = true;
    for(int i=1; i<a.size(); i++)
    {
        if(a[i] >= 97){
         isTrue = false;
         break;
        }
    }
    if(isTrue)
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>=97) a[i]=a[i]-32;
            else a[i]=a[i]+32;
        }
        cout<<a<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
}
