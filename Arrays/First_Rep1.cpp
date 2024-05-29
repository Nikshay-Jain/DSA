#include<bits/stdc++.h>
using namespace std;

int rep(int n, int a[])
{
    int slow = a[0] + 1, fast = a[0] + 1;
    do
    {
        slow = a[slow] + 1;
        fast = a[a[fast] + 1] + 1;
    } while (slow!=fast);

    slow = a[0] + 1;
    while(slow!=fast)
    {
        slow = a[slow] + 1;
        fast = a[fast] + 1;
    }
    return slow-1;
}

int main()
{
    int n = 9,i=0,j=0,t=0;              // if there was no 0 in the array, the function code need not have +1's everwhere
    int a[n] = {1,0,3,2,4,6,5,7,3};
    cout<<rep(n,a);
}