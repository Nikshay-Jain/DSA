#include<bits/stdc++.h>
using namespace std;

void pattern_search(string str, string pat)
{
    int n = str.length(), l = pat.length(), i, t=0;

    for(i=0;i<n-l;i++)
    {
        if(str[i]==pat[0])
        {
            if(str.substr(i,l) == pat)
            {
                cout<<i<<" to "<<i+l<<endl;
                i+=(l-1);    // is characters in the pattern are same, comment this line. Eg for pat = "aaa"
                t++;
            }
        }
    }
    if(t==0)
        cout<<"Pattern not found";
}

int main()
{
    string str = "geeksforgeeks, that too for geekekkeekks";
    string pat = "eek";
    pattern_search(str,pat);
}