#include<bits/stdc++.h>
using namespace std;
int i,j,t,c;
void Selection(int n[],int l)
{
    c=0;
    int min;
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
            t=n[min];
            n[min]=n[i];
            n[i]=t;
            c++;
        }
    }
    for(i=0;i<l;i++)
        cout<<n[i]<<endl;
    cout<<c<<" swaps by Selection Sort\n"<<endl;
}

void Bubble(int n[],int l)
{
    c=0;
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(n[j]>n[j+1])
            {
                t=n[j+1];
                n[j+1]=n[j];
                n[j]=t;
                c++;
            }
        }
    }
    for(i=0;i<l;i++)
        cout<<n[i]<<endl;
    cout<<c<<" swaps by Bubble sort\n"<<endl;
}

void Insertion(int n[],int l)
{
    c=0;
    for (i=1;i<l;i++)
    {
        t=n[i];
        j=i-1;
        while(n[j]>t && j>=0)
        {
            n[j+1]=n[j];
            j--;
            c++;
        }
        n[j+1]=t;
    }
    for(i=0;i<l;i++)
        cout<<n[i]<<endl;
    cout<<c<<" swaps in Insertion search\n"<<endl;
}

int main()
{
    cout<<"Enter size of array"<<endl;
    int i,l,t;
    cin>>l;
    int n[l],nb[l],ni[l];
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<l;i++)
    {
        cin>>n[i];
        nb[i]=n[i];
        ni[i]=n[i];
    }
    cout<<endl;
    Selection(n,l);
    Bubble(nb,l);
    Insertion(ni,l);
}