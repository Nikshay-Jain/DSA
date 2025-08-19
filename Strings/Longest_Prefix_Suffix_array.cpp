#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcbabca";
    int i = 1, n = str.length(), len = 0;
    int lps[n];
    lps[0] = 0;
    while(i<n)
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len-1];
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<lps[i]<<" ";
}