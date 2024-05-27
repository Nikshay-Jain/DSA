#include <bits/stdc++.h>
using namespace std;

// first m nos by adding prev n consec nos.
// Recursion and simple looping -> O(n*m)
// Window sliding technique -> O(n)

int main()
{
    int m = 10, n = 4, sum = 1, i;
    int a[m];

    for(i=0;i<n-1;i++)
    {
        a[i] = 0;
        cout<<a[i]<<" ";
    }
    a[n-1] = 1;
    cout<<a[n-1]<<" ";

    for(i=n;i<m;i++)
    {
        a[i] = sum;
        cout<<a[i]<<" ";
        sum = sum - a[i-n] + a[i];      //shift window with i
    }
}