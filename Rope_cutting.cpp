#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    
    int res = max({maxPieces(n-a,a,b,c), maxPieces(n-b,a,b,c), maxPieces(n-c,a,b,c)});

    if(res==-1)
        return -1;
    
    return res+1;
}

int main()
{
    cout<<"Enter total rope length and valid pieces lengths"<<endl;
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<maxPieces(n,a,b,c);
}