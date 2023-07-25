#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,t;
    bool f=false;
    cout<<"Enter order of matrices"<<endl;
    cin>>n>>m;
    cout<<"Enter sorted matrix"<<endl;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    cout<<"Enter target to be searched"<<endl;
    cin>>t;

    int r=0,c=m-1;
    while(r<n && c>=0)
    {
        if(a[r][c]==t)
        {
            f=true;
            break;
        }
        else if(a[r][c]>t)
            c--;
        else
            r++;
    }
    if(f==true)
        cout<<"Element present";
    else
        cout<<"Element absent";
}