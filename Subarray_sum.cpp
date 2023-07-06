#include <bits/stdc++.h>
using namespace std;

int subtractive_sum(int a[], int n, int sum)
{
    if(n==0)
        return ((sum==0)?1:0);
    
    return (subtractive_sum(a, n-1, sum) + subtractive_sum(a, n-1, sum-a[n-1]));
}

//Only for non -ve arrays
void additive_sum(int a[], int n, int s)
{
    int i, st=0, ed=0, sum=0, t;
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
        cout<<"No"<<endl;
}

int main()
{
    int i,t=0,n,s;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"Enter sum needed"<<endl;
    cin>>s;

    additive_sum(a,n,s);
    int sub = subtractive_sum(a,n,s);
    (sub>0)?(cout<<"Subtractive method: Yes"):(cout<<"Subtractive method: No");
}