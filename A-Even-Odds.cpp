#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k;
    vector <long int> last;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0) last.push_back(i);
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==0) last.push_back(i);
    }
    for(int i=0; i<last.size(); i++)
    {
        if(i==(k-1)) cout<<last[i];
    }

}
