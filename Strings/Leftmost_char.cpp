#include <bits/stdc++.h>
using namespace std;

int leftmost_rep_char(string str)
{
    int i, l = str.length();
    string str1;
    char ch;
    for(i=0;i<(l-1);i++)
    {
        ch = str[i];
        str1 = str.substr(i+1);
        if(str1.find(ch) != string::npos)
            return i;
    }
    return -1;
}

int main()
{
    string str = "nikshays";
    cout<<leftmost_rep_char(str)<<endl;
}