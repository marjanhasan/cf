#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, odd, even, index_odd, index_even;
    odd=even=index_even=index_odd=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0)
        {
            even++;
            index_even=i+1;
        }
        else
        {
            odd++;
            index_odd=i+1;
        }
    }
    if(even>odd) cout << index_odd;
    else cout << index_even;

}
