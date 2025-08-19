#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct Point
{
    int x,y;
};

bool cmp_x(Point p1, Point p2)
{
    return (p1.x < p2.x);
}

int main()
{
    int n = 5,i;
    int arr[n] = {50,10,20,5,7};
    vector<int> vec = {50,10,20,5,7};

    sort(arr,arr+n);                        // uses intro sort - hybrid fo insertion, quick and heap sort

    cout<<"Ascending array by STL library function"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    sort(arr,arr+n, greater <int>());

    cout<<"Descending array by STL library function"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    sort(vec.begin(),vec.end());

    cout<<"Ascending vector by STL library function"<<endl;
    for(i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    sort(vec.begin(),vec.end(), greater<int>());

    cout<<"Descending vector by STL library function"<<endl;
    for(i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    Point P[] = {{3,10},{2,8},{5,4}};
    sort(P,P+3,cmp_x);

    cout<<"Acc to x coord of point by STL library function"<<endl;
    for(auto i:P)
        cout<<i.x<<" "<<i.y<<endl;
    cout<<endl;
}