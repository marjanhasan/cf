#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> b,a= {"I hate it", "I hate that ", "I love it", "I love that "};
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if (i%2!=0) b.push_back(a[1]);
        else b.push_back(a[3]);
    }
    b.pop_back();
    if (n%2!=0) b.push_back(a[0]);
    else b.push_back(a[2]);
    for(int i=0; i<b.size(); i++)
    {
        cout<<b[i];
    }




}
