#include<bits/stdc++.h>
using namespace std;

bool isSafe(string str, int l, int i)
{
    if(l!=0 && (str[l-1]=='a' && str[i]=='b'))
        return false;
    if(l!=0 && (str[l-1]=='b' && str[i]=='a'))
        return false;
    return true;
}

void perm(string str, int l, int r)
{
    int i;
    if(l==r)
    {
        cout<<str<<endl;
        return;
    }

    else
    {
        for(i=l;i<=r;i++)
        {
            if(isSafe(str,l,i))
            {
                swap(str[l],str[i]);
                perm(str,l+1,r);
                swap(str[l],str[i]);
            }
        }
    }
}

int main()
{
    string str = "abc";
    cout<<"Permutations without ab together:"<<endl;
    perm(str,0,str.length()-1);
}