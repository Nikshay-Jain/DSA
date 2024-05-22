#include <bits/stdc++.h>
using namespace std;

int i;

void odd1(int a[], int n)
{                               //Properties of XOR
    int res = 0;                //x^0 = x
    for(i=0;i<n;i++)            //x^y = y^x
        res = res^a[i];         //x^x = 0
    cout<<(res)<<" is the one no that appears odd no of times in the array";
}

void odd2(int a[], int n)
{
    int XOR = 0, res1 = 0, res2 = 0;

    //finding XOR of all the array (it contains the XOR of the 2 nos we finally need)
    for(i=0;i<n;i++)
        XOR = XOR^a[i];

    //finding last set bit of XOR
    int l = XOR & (~(XOR-1));

    //divide the array into parts with that last bit set and not set and take their XORs individually to get the 2 nos
    for(i=0;i<n;i++)
    {
        if((a[i] & l)!=0)
            res1 = res1 ^ a[i];
        else
            res2 = res2 ^ a[i];
    }
    cout<<res1<<" and "<<res2<<" are the 2 nos that appear odd no of times in the array"<<endl;
}

int main()
{
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];

    odd2(a,n);
    odd1(a,n);
}