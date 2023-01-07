#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, countt=0;
    cin >> k >> l >> m >> n >> d;
    for(int i =1; i <= d; i++)
    {
        if(i % k == 0  || i % l == 0 || i % m == 0 || i % n == 0)
        {
            countt++;
        }
    }
    cout << countt;
}

/**
This is a very simple problem
if from 1 -d is divisible by any of the k,l,m,n-th value,
then we have to just count it
and then the result will be the final countt value */
