#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], ma = 0, mi = 101, maxi, mini;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > ma)
        {
            ma = a[i];
            maxi = i;
        }
        if(a[i] <= mi)
        {
            mi = a[i];
            mini = i;
        }

    }
    if(maxi > mini)
    {
        cout << (maxi-1)+(n-mini)-1;
    }
    else cout << (maxi-1)+(n-mini);
}
