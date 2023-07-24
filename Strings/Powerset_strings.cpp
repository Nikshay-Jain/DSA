#include <bits/stdc++.h>
using namespace std;

void powerset(string &str, string curr = "", int i = 0)
{
    if(i == str.length())
    {
        cout<<curr<<endl;
        return;
    }
    powerset(str, curr, i+1);
    powerset(str, curr+str[i], i+1);
}

int main()
{
    cout<<"Enter string"<<endl;
    string str;
    cin>>str;
    powerset(str);
}