#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=0,ir=0,c=0;
    cout<<"Enter no of days"<<endl;
    cin>>n;
    cout<<"Enter no of visitors on each days"<<endl;
    int d[n];

    while(i<n)
    {
        cin>>d[i]; 
        i++;
    }

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    
    i=0;
    while(i<n-1)
    {
        if(d[i]>max && d[i]>d[i+1])
        {
            max=d[i];
            ir=i+1;
            cout<<"Record breaking day is: "<<ir<<" with visitors= "<<max<<endl;
            c++;
        }
        i++;
    }
    
    if(d[n-1]>d[n-2])
    {
        cout<<"Record breaking day is: "<<n<<" with visitors= "<<d[n-1]<<endl;
        c++;
    }
    cout<<c<<" record breaking days.";
}