#include<bits/stdc++.h>
using namespace std;

int max_pdt(int n, int nums[])
{
    int i;
    if (n == 0)
        return 0;
    int max_prod = 1, min_prod = 1, temp_max;
    int result = nums[0];

    for (i = 0; i < n; i++)
    {
        temp_max = max({ nums[i], max_prod * nums[i], min_prod * nums[i] });
        min_prod = min({ nums[i], max_prod * nums[i], min_prod * nums[i] });
        max_prod = temp_max;
        result = max(result, max_prod);
    }
    return result;
}

int main()
{
    int n=3;
    int a[n] = {3,-2,-5};
    cout<<max_pdt(n,a);
}