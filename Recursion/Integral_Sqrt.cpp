#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"Enter no"<<endl;
    cin>>n;
    // cout<<floor(pow(n,0.5));     Most efficient soln!
    int low = 1, high = n, ans = -1, mid, msq;
    while(low<=high)
    {
        mid = (low+high)/2;
        msq = mid*mid;
        if(msq==n)
        {
            ans = mid;
            break;
        }

        else if(msq>n)
            high = mid - 1;
        
        else
        {
            low = low + 1;
            ans = mid;
        }
    }
    cout<<ans;
}