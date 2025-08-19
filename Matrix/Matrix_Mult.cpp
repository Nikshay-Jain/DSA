#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n1,n2,n3;
    cout<<"Enter order of matrices"<<endl;
    cin>>n1>>n2>>n3;
    cout<<"Enter matrices to be multiplied"<<endl;
    int m1[n1][n2],m2[n2][n3],m3[n1][n3];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
            cin>>m1[i][j];
        for(j=0;j<n3;j++)
            m3[i][j]=0;
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n3;j++)
            cin>>m2[i][j];
    }
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            for(k=0;k<n2;k++)
                m3[i][j]+=(m1[i][k]*m2[k][j]);
        }
    }
    cout<<"Multiplied Matrix is:"<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
            cout<<m3[i][j]<<"\t";
        cout<<endl;
    }
}