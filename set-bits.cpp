#include <bits/stdc++.h>
using namespace std;

//O(n) = total bits count
void naive(int n)
{
    int c=0;
    while(n>0)
    {                   //  OR              OR
        if(n%2!=0)      //if(n&1==1)    c+=(n&1);
            c++;        //  c++;        n=n>>1;
        n/=2;           //n=n>>1;
    }
    cout<<"The no has "<<c<<" bits set by naive algo"<<endl;
}

//O(n) = set bit count
void brian_kerningam(int n)
{
    int c=0;
    while(n>0)
    {
        n = n&(n-1);
        c++;
    }
    cout<<"The no has "<<c<<" bits set by brian kerningam algo"<<endl;
}

//O(n) = 1
void lookup_table(int n)
{
    int table[256],i;
    table[0] = 0;
    for(i=1;i<256;i++)
        table[i] = (i&1) + table[i/2];
    
    int c=table[n&0xff];
    n=n>>8;
    c+=table[n&0xff];
    n=n>>8;
    c+=table[n&0xff];
    n=n>>8;
    c+=table[n&0xff];
    cout<<"The no has "<<c<<" bits set by look-up table algo"<<endl;
}

int main()
{
    int n;
    cout<<"Enter no to be checked"<<endl;
    cin>>n;
    naive(n);
    brian_kerningam(n);
    lookup_table(n);
}