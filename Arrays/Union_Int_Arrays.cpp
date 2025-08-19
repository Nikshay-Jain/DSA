#include<bits/stdc++.h>
using namespace std;

vector<int> array_intersection(vector<int> a, vector <int> b)
{
    int i=0, j=0, k=0, n = a.size(), m = b.size();
    vector<int> intr(min(n,m));
    while(i<n && j<m)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            intr[k] = a[i];
            i++;
            j++;
            k++;
        }
    }
    intr.resize(k); 
    return intr;
}

vector<int> array_union(vector<int> a, vector <int> b)
{
    int i=0, j=0, k=0, n = a.size(), m = b.size();
    vector<int> un(n+m);
    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }

        if (a[i] < b[j])
        {
            un[k] = a[i];
            i++;
        }
        else if (a[i] > b[j])
        {
            un[k] = b[j];
            j++;
        }
        else
        {
            un[k] = a[i];
            i++;
            j++;
        }
        k++;
    }

    while (i < n)
    {
        if(i>0 && a[i]!=un[k-1])
        {
            un[k] = a[i];
            k++;
        }
        i++;
    }
    
    while (j < m)
    {
        if(j>0 && b[j]!=un[k-1])
        {
            un[k] = b[j];
            k++;
        }
        j++;
    }
    un.resize(k);
    return un;
}

int main()
{
    vector<int> a = {10,20,30,30,50}, b = {5,20,20,40,50,50};

    vector<int> unin = array_union(a,b);
    int lun = unin.size();

    vector<int> intr = array_intersection(a,b);
    int lint = intr.size();

    int i;
    cout<<"Intersection of arrays: "<<endl;
    for(i=0;i<lint;i++)
        cout<<intr[i]<<" ";

    cout<<"\n\nUnion of arrays: "<<endl;
    for(i=0;i<lun;i++)
        cout<<unin[i]<<" ";
}