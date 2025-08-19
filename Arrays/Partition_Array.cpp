#include<bits/stdc++.h>
using namespace std;

vector<int> lomuto(vector<int> a, int p)
{
    int low = 0, high = a.size();
    swap(a[p],a[high-1]);
    int pivot = a[high-1], i = low - 1, j;

    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high-1]);
    return a;
}

vector<int> hoare(vector<int> a, int p)
{
    int low = 0, high = a.size(), i = low-1, j = high;
    swap(a[low],a[p]);
    int pivot = a[low];
    while(true)
    {
        do
        {
            i++;
        } while (a[i]<=pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i>=j)
            return a;
        swap(a[i],a[j]);
    }
}

int main()
{
    vector<int> vec = {10,80,30,90,40,50,70};
    int p = 4;                                      // element to consider as pivot
    vector<int> lmt_part = lomuto(vec, p);
    int i,n = vec.size();
    cout<<"Lomuto partition"<<endl;
    for(i=0;i<n;i++)
        cout<<lmt_part[i]<<" ";
    cout<<endl;

    vector<int> hor_part = hoare(vec, p);
    cout<<"Hoare partition"<<endl;
    for(i=0;i<n;i++)
        cout<<hor_part[i]<<" ";
    cout<<endl;
}