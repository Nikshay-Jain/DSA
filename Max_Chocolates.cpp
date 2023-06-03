#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"1 chocolate for each rupee or 3 wrappers"<<endl;
    cout<<"Enter Rs you have"<<endl;
    int n,w=0,sum=0;
    cin>>n;
    int c=n;
    while(c>0)
    {
        w+=c%3;
        sum+=c+(w/3);
        w%=3;
        c/=3;
    }
    if(w==0)
        w=1;
    cout<<sum<<" Chocolates with "<<w<<" wrappers left";
}