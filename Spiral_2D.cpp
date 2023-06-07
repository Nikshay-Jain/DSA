#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,c;
    cout<<"Enter order of matrix"<<endl;
    cin>>n>>m;
    cout<<"Enter array elements"<<endl;
    int a[n][m];
    for(r=0;r<n;r++)
    {
        for(c=0;c<m;c++)
            cin>>a[r][c];
    }

    int rs=0,re=n-1,cs=0,ce=m-1;
    while(rs<=re && cs<=ce)
    {
        for(c=cs;c<=ce;c++)
            cout<<a[rs][c]<<" ";
        rs++;
        for(r=rs;r<=re;r++)
            cout<<a[r][ce]<<" ";
        ce--;
        for(c=ce;c>=cs;c--)
            cout<<a[re][c]<<" ";
        re--;
        for(r=re;r>=rs;r--)
            cout<<a[r][cs]<<" ";
        cs++;
    }
}