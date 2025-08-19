#include <bits/stdc++.h>
using namespace std;

// & indicates pass by reference
void rev(string& str, int start, int end)
{
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
}

string rev_words(string& str)
{
    str+=" ";                               // add " " to facilitate reversing of last word too
    int n = str.length(), i, start = 0;     // 1) abc def xyz
    for(i=0;i<n;i++)                        // 2) cba fed zyx  -> individual words get reversed
    {                                       // 3) xyz def abc  -> full string gets reversed
        if(str[i]==' ')                     // net word-wise reveral from 1 to 3
        {
            rev(str,start,i);
            start = i+1;
        }
    }
    rev(str,0,n-1);                         // reverse whole string finally
    return str;
}

int main()
{
    string str = "reverse words in a string";
    cout<<rev_words(str);
}