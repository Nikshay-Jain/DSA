#include <bits/stdc++.h>
using namespace std;

int t=0;

// T(n) = 2T(n-1) + 1 as T(1) = 1
void toh(int n, char a, char b, char c)
{
    t++;
    if(n==1)
    {
        cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
        return;
    }
    toh(n-1, a, c, b);                                  // move disks from a to b
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1, b, a, c);                                  // move disks from b to c
}

int main()
{
    cout<<"Enter no of disks"<<endl;
    int n;
    cin>>n;
    toh(n,'a','b','c');
    cout<<t<<" steps"<<endl;
}