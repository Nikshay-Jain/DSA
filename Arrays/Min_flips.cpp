#include <bits/stdc++.h>
using namespace std;

int main()
{
    //flip the set of nos having 2nd occurance from start as they are <= in no of sets.
    //Eg. 11 000 111 00 1 0 1
    int n,i;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            if(a[i]!=a[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<i-1<<endl;
        }
    }
    if(a[n-1]!=a[0])
        cout<<n-1<<endl;
}