#include <bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2)
{
    if(str1.length()!=str2.length())
        return false;
    
    int l = str1.length();
    int t = 256,i;
    int count[t] = {0};
    for(i=0;i<l;i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(i=0;i<t;i++)
    {
        if(count[i]!=0)
            return false;
    }
    return true;
}

int main()
{
    // anagrams are 2 strings with exactly same characters.
    // Eg listen and silent but not abab or aabbbbbabbab as freq are different.
    string str1 = "listen", str2 = "silent";
    cout<<anagram(str1,str2);
}