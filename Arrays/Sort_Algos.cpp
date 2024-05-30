#include<bits/stdc++.h>
using namespace std;

int i,j;

void Selection(vector<int> n,int l)
{
    int min,c=0;
    for(i=0;i<l-1;i++)
    {
        min=i;
        for(j=i+1;j<l;j++)
        {
            if(n[j]<n[min])
                min=j;
        }
        if(n[min]!=n[i])
        {
            swap(n[i],n[min]);
            c++;
        }
    }
    for(i=0;i<l;i++)
        cout<<n[i]<<" ";
    cout<<endl<<c<<" swaps by Selection Sort\n"<<endl;
}

void Bubble(vector<int> n,int l)
{
    int c=0;
    bool swapped = false;
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(n[j]>n[j+1])
            {
                swap(n[j],n[j+1]);
                swapped = true;
                c++;
            }
        }
        if(swapped==false)
            break;
    }
    for(i=0;i<l;i++)
        cout<<n[i]<<" ";
    cout<<endl<<c<<" swaps by Bubble sort\n"<<endl;
}

void Insertion(vector<int> n,int l)
{
    int t,c=0;
    for (i=1;i<l;i++)
    {
        t = n[i];
        j = i-1;
        while(n[j]>t && j>=0)
        {
            n[j+1] = n[j];
            j--;
            c++;
        }
        n[j+1] = t;
    }
    for(i=0;i<l;i++)
        cout<<n[i]<<" ";
    cout<<endl<<c<<" swaps in Insertion search\n"<<endl;
}

int main()
{
    int n = 5,i;
    vector<int> arr = {10,20,5,50,7};
    cout<<endl;
    
    Selection(arr,n);
    Bubble(arr,n);
    Insertion(arr,n);
}