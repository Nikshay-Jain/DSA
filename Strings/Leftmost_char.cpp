#include <bits/stdc++.h>
using namespace std;

// O(n^2)
int leftmost_rep_char1(string str)
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

// O(n) but 256 extra space
int leftmost_rep_char2(string str)
{
    bool visited[256];
    fill(visited, visited+256, false);
    int i,n = str.length(), res=-1;
    for(i=n-1;i>=0;i--)
    {
        if(visited[str[i]])
            res = i;
        else
            visited[str[i]] = true;
    }
    return res;
}

// O(n) but 256 extra space
int leftmost_non_rep_char(string str)
{
    int fi[256];            // freq of ith char ie single or multiple
    fill(fi, fi+256, -1);
    int i,n = str.length(), res=INT16_MAX;

    for(i=0;i<n;i++)
    {
        if(fi[str[i]]==-1)
            fi[str[i]] = i;
        else
            fi[str[i]] = -2;        // if already present, fi[str[i]] != -1, mark it as -2 
    }

    for(i=0;i<256;i++)
    {
        if(fi[i]>=0)
            res = min(res,fi[i]);
    }
    return (res==INT16_MAX)? -1:res;
}

int main()
{
    string str = "abbcdb";
    cout<<leftmost_rep_char1(str)<<endl;
    cout<<leftmost_rep_char2(str)<<endl;
    cout<<leftmost_non_rep_char(str)<<endl;
}