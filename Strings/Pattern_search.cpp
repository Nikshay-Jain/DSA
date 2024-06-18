#include<bits/stdc++.h>
using namespace std;

//Time: O(n) as we jump by l in substr part so compensate the time spent in getting the substr ie O(l)
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
                i+=(l-1);       // if characters in the pattern are same, comment this line. Eg for pat = "aaa"
                t++;
            }
        }
    }
    if(t==0)
        cout<<"Pattern not found";
}

void rabin_karp_algo(string txt, string pat)
{
    int M = pat.length(), N = txt.length();
    int i, j, p = 0, t = 0, h = 1, d = 256, q = INT_MAX;     // keeping q large to avoid collisions

    for (i=0;i<(M-1);i++)
        h = (h*d)%q;

    for (i = 0; i < M; i++)
    {
        p = (d*p+pat[i])%q;
        t = (d*t+txt[i])%q;
    }

    for (i=0;i<=N-M;i++)
    {
        if (p==t)
        {
            // Check for characters one by one
            for (j=0;j<M;j++)
            {
                if (txt[i+j]!=pat[j])
                    break;
            }
            if (j == M)
                cout<<"Pattern found at index "<<i<<endl;
        }
 
        // Calculate hash value for next window of text. Remove leading digit, add trailing digit
        if(i < N-M)
        {
            t = (d*(t-txt[i]*h) + txt[i+M]) % q;
            if (t<0)
                t = (t + q);
        }
    }
}

int main()
{
    string str = "geeksforgeeks, that too for geekekkeekks";
    string pat = "eek";
    cout<<"My soln:"<<endl;
    pattern_search(str,pat);
    cout<<"\nRabin carp:"<<endl;
    rabin_karp_algo(str,pat);
}