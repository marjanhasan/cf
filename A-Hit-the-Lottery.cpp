#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, countt;
    cin >> n;
    while(n)
    {
        if(n >= 100)
        {
            countt++;
            n -= 100;
        }
        else if(n >= 20)
        {
            countt++;
            n -= 20;
        }
        else if(n >= 10)
        {
            countt++;
            n -= 10;
        }
        else if(n >= 5)
        {
            countt++;
            n -= 5;
        }
        else
        {
            countt++;
            n -= 1;
        }
    }
    cout << countt;
}
