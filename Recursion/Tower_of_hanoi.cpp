#include <bits/stdc++.h>
using namespace std;

int t=0;

// T(n) = 2T(n-1) + 1 as T(1) = 1
void toh(int n, char a, char b, char c)                 // these a,b,c are start, end and auxillary positions
{                                                       // and vals in them are tower nos
    t++;
    if(n==1)
    {
        cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
        return;
    }
    toh(n-1, a, c, b);                                  // move disks from a to b using c as auxillary
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1, b, a, c);                                  // move disks from b to c using b as auxillary
}

int main()
{
    cout<<"Enter no of disks"<<endl;
    int n;
    cin>>n;
    toh(n,'a','b','c');
    cout<<t<<" steps"<<endl;
}