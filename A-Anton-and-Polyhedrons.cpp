#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, add;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if(str == "Tetrahedron") add+=4;
        else if(str == "Cube") add+=6;
        else if(str == "Octahedron") add+=8;
        else if(str == "Dodecahedron") add+=12;
        else if(str == "Icosahedron") add+=20;
        else add+=0;
    }
    cout << add;
}
