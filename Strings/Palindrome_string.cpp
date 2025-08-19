#include <bits/stdc++.h>
using namespace std;

bool pal(string &ch)
{
    int s = 0, e = ch.length()-1;
    while(s<e)
    {
        if(ch[s]!=ch[e])
            return false;
        s++;
        e--;
    }
    return true;
}

int main()
{
    int s=0,e;
    cout<<"Enter string"<<endl;
    string str;
    getline(cin,str);
    cout<<pal(str)<<endl;
}