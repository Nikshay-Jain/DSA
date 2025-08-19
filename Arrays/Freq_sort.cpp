#include<bits/stdc++.h>
using namespace std;

// Look out more efficient soln in hashing folder

struct pt
{
    int x, y;
};

bool cmp(pt p1, pt p2)
{
    return (p1.y < p2.y);
}

void freq_sort(int a[], int n)
{
    pt points[n];
    vector <int> b;
    sort(a,a+n);
    points[0] = {a[0], int(count(a,a+n,a[0]))};
    int i,j=1,k;

    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            points[j] = {a[i], int(count(a,a+n,a[i]))};
            j++;
        }
    }

    sort(points, points+j, cmp);
    for(i=0;i<j;i++)
    {
        for(k=0; k<points[i].y; k++)
        {
            b.push_back(points[i].x);
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}

int main()
{
    int n = 14, i;
    int a[n] = {1,1,1,2,5,4,4,3,3,5,3,3,3,5};
    freq_sort(a,n);
}