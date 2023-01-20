#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, test;
    cin >> a >> b >> c;
    test = a + b;
    sort(test.begin(), test.end());
    sort(c.begin(), c.end());
    if(test == c) cout << "YES\n";
    else cout << "NO\n";
}
