#include<bits/stdc++.h>
using namespace std;

bool is_feasible(vector<int> a, int ans, int k, int n)
{
    int sum = 0, peeps=1, i;
    for(i=0;i<n;i++)
    {
        if(sum+a[i]>ans)
        {
            sum=a[i];
            peeps++;
        }
        else
            sum+=a[i];
    }
    if(peeps<=k)
        return true;
    else 
        return false;
}

// Time: O(n*log(sum))
int min_pages(vector<int> a, int k)
{
    int i, n = a.size(),end = a[0], beg = a[0], mid, res = 0;
    for(i=1;i<n;i++)
    {
        beg = max(beg,a[i]);
        end += a[i];
    }
    // no solution can lie outside the range [beg, end]
    // apply bin search on this unsorted array to find the optimum mid in the given range

    if(k==1)
        return end;

    while(beg<=end)
    {
        mid = (beg+end)/2;
        cout<<mid<<endl;
        if(is_feasible(a,mid,k,n))
        {
            res = mid;
            end = mid-1;        // if these many pages are feasible, there might be a smaller ans existing
        }
        else
            beg = mid+1;
    }
    return res;
}

int main()
{
    vector<int> a = {10,20,10,30};
    int k = 2;
    cout<<"Max no of pages a student has to read after minimisation: "<<min_pages(a,k);
}