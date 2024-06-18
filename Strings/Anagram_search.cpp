#include<bits/stdc++.h>
using namespace std;

bool ana_search(string str, string pat)
{
    vector<int> cs(256,0), cp(256,0);
    int i, ns = str.length(), np = pat.length();
    
    for(i=0;i<np;i++) {
        cs[str[i]]++;
        cp[pat[i]]++;
    }
    
    for(i=np;i<ns;i++) {
        if(cp==cs)
            return true;
        cs[str[i]]++;
        cs[str[i-np]]--;
    }
    return false;
}

int main()
{
    string str = "geeksforgeeks", pat = "frog";
    cout<<ana_search(str,pat);
}