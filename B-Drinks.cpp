#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n];
    float sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        sum+=p[i];
    }
    cout<<sum/n<<endl;
}
