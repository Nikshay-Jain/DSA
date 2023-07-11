#include <bits/stdc++.h>
using namespace std;
int i,j,k;
void Quad1(int n)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<n-i+1<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<n-j+1<<" ";
        cout<<endl;
    }
}
void Quad2(int n)
{
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<j<<" "; 
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<n-i+1<<" "; 
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<n-j+1<<" "; 
        cout<<endl;
    }
    cout<<endl;
}
void Quad3(int n)
{
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<n-i+1<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<n-j+1<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void Quad4(int n)
{
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<n-i+1<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<n-j+1<<" ";
        cout<<endl;
    }
}
void QuadUp(int n)
{
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        k=i;
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void QuadDown(int n)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++)
        {
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++)
        {
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter max no"<<endl;
    cin>>n;
    cout<<endl;
    Quad1(n);
    Quad2(n);
    Quad3(n);
    Quad4(n);
    QuadUp(n);
    QuadDown(n);
}