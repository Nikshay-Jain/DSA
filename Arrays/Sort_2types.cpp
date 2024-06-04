#include<bits/stdc++.h>
using namespace std;

// sort  array st +ves appear before -ves
// use hoare's partition to sort nos
// same can be used for even odd sorting

vector<int> sort_pos_neg(vector<int> a)
{
    int i = -1, j = a.size();
    while(true)
    {
        do
        {
            i++;
        } while (a[i]>=0);
        do
        {
            j--;
        } while (a[j]<0);

        if(i>=j)
            return a;
        swap(a[i],a[j]);
    }
    return a;
}

int main()
{
    vector<int> a = {-80,50,-60,-70,10,-30,20};
    vector<int> b = sort_pos_neg(a);
    int i, n = b.size();
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
}