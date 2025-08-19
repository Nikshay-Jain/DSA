#include<bits/stdc++.h>
using namespace std;

// Time  = O(n*256)
int lexi(string str)
{
    int n = str.length(), i, j, res = 1;
    int mul = 1;
    for(i=2;i<=n;i++)               // n-factorial as lexi posn needs = 4*5! + 4*4! + ... + 1*1! + 1*0!
        mul*=i;
    
    vector<int> count(256,0);       // initialise count array
    for(i=0;i<n;i++)
        count[str[i]]++;            // feed in freq of letters
    
    for(i=1;i<256;i++)
        count[i] += count[i-1];     // make count cumulative freq array
    
    for(i=0;i<n;i++)
    {
        mul /= (n-i);
        res += (count[str[i]-1]*mul);   // (add no of char less than current so go at 1 posn prior)*fact of remaining posn later
        for(j=str[i];j<256;j++)
            count[j]--;                 // as we proceed ahead, reduce the freq of letters as  1 char is already dealt with
    }
    return res;
}

int main()
{
    string str = "string";
    cout<<lexi(str);
}