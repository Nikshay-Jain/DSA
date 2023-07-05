#include <bits/stdc++.h>
#include <string>
using namespace std;

void permut(string str, int i=0)
{
    int j;
    if (i == str.length()-1)
    {
        cout<<str<<" ";
        return;
    }

    for(j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        permut(str,i+1);
        swap(str[i],str[j]);
    }
}

int main()
{
    cout<<"Enter string"<<endl;
    string str;
    cin>>str;
    permut(str);
}