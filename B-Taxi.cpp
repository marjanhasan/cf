#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, n, s, countt, left;
    a=b=c=d=countt=left=0;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s == 1) a++;
        else if(s == 2) b++;
        else if(s == 3) c++;
        else if(s == 4) d++;
    }
    countt+=d;

    countt+= (b/2);
    left+= ((b%2)*2); /// 2

    if(c > a)
    {
        countt += a;
        left += ((c-a)*3); /// 6
    }
    else
    {
        countt += c;
        left += ((a-c)*1);
    }

    countt += (left / 4);
    if((left%4) != 0) countt++;

    cout << countt <<endl;
}

/**
3
3 3 2
2
expected 3*/
