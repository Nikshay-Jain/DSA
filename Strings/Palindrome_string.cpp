#include <bits/stdc++.h>
using namespace std;

bool pal(string &ch, int s, int e)
{
    if(s>=e)
        return true;
    return ((ch[s]==ch[e]) && pal(ch,s+1,e-1));
}

int main()
{
    int s=0,e;
    cout<<"Enter string"<<endl;
    string str;
    cin>>str;
    e = str.length()-1;
    cout<<pal(str,s,e);
}