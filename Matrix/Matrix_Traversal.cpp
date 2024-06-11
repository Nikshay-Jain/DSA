#include<bits/stdc++.h>
using namespace std;

void spiral_pattern(vector<vector<int>> a)
{
    int r,c;
    int n = a.size(), m = a[0].size();

    if(n==1)                        // to avoid corner cases
    {
        for(c=0;c<m;c++)
            cout<<a[0][c]<<" ";
    }

    else if(m==1)
    {
        for(r=0;r<n;r++)
            cout<<a[r][0]<<" ";
    }

    else
    {
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
}

void snake_pattern(vector<vector<int>> a)
{
    int n = a.size(), m = a[0].size();
    int r,c;
    for(r=0;r<n;r++)
    {
        if(r%2==0)
        {
            for(c=0;c<m;c++)
                cout<<a[r][c]<<" ";
        }
        else
        {
            for(c=m-1;c>=0;c--)
                cout<<a[r][c]<<" ";
        }
    }
}

int main()
{
    vector<vector<int>> a = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};

    spiral_pattern(a);
    cout<<endl;
    snake_pattern(a);
}