#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int n,i;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    //find a candidate for being present majority (>n/2) times as only then other elements won't be able to make the count 0
    //count gives diff of count of maj element and all others
    int res=0,count=1;
    for(i=0;i<n;i++)
    {
        if(a[res] == a[i])
            count++;
        else
            count--;
        if(count==0)
        {
            res = i;
            count = 1;
        }
    }

    //check if the candidate is present >n/2 times
    count = 0;
    for(i=0;i<n;i++)
    {
        if(a[res] = a[i])
            count ++;
    }
    if(count<=(n/2))
        cout<<"No element occurs >(n/2) times"<<endl;
    else
        cout<<"Element at posn "<<res<<" is the max occuring element"<<endl;
}