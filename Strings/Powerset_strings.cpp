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

//using bitwise operators
void bits_power(string &str)
{
    int l = str.length();
    int n = pow(2,l), i, j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            if((i & (1<<j)) != 0)
                cout<<str[j];
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Enter string"<<endl;
    string str;
    cin>>str;
    powerset(str);
    bits_power(str);
}