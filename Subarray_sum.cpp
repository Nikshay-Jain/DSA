#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t=0,n,sum = 0,s;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n], st = 0, ed = 0;
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"Enter sum needed"<<endl;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(sum==s)
        {
            t=1;
            break;
        }

        else if (sum < s)
        {
            sum+=a[i];
            ed = i;
        }

        else
        {
            sum-=a[st];
            st++;
            i--;
        }
        cout<<sum<<" "<<st<<" "<<ed<<endl;
    }

    if(t==1)
        cout<<"Yes: "<<st<<" "<<ed<<endl;
    else
        cout<<"No";
}