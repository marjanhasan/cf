#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,best,worst,countT=0;
    cin>>n>>best;
    worst=best;
    while(--n)
    {
        int a;
        cin>>a;
        if(a<worst)
        {
            worst=a;
            countT++;
        }
        if(a>best)
        {
            best=a;
            countT++;
        }
    }
    cout<<countT<<"\n";
}
