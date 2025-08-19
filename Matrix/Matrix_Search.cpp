#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n=3,m=3,t=7;
    bool f=false;
    vector<vector<int>> a = {{1,2,3},
                             {4,5,6},
                             {7,8,9}};

    int r=0,c=m-1;
    while(r<n && c>=0)          // start from  the top right corner and move down if target is larger than current
    {                           // and move left if target is less than current 
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