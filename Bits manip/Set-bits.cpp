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
        n = n & (n-1);      //turns off the last set bit in each iteration till no becomes =0
        c++;
    }
    cout<<"The no has "<<c<<" bits set by brian kerningam algo"<<endl;
}

//O(n) = 1
void lookup_table(int n)            //for 32 bit nos only. In case of 64 bit nos, extend the repetition more no of times
{
    int table[256],i;
    table[0] = 0;
    for(i=1;i<256;i++)
        table[i] = (i&1) + table[i/2];
    
    int c=table[n & 0xff];          //initialises c with bitwise AND of n and no with 8 1's
    n=n>>8;                         //shifts n by 8 bits to right
    c+=table[n & 0xff];             //adds c with bitwise AND of new n and no with 8 1's
    n=n>>8;
    c+=table[n & 0xff];
    n=n>>8;
    c+=table[n & 0xff];
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