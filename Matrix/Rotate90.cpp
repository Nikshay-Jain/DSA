#include <iostream>
#include <vector>
using namespace std;

int i,j;
vector<vector<int>> transpose(vector<vector<int>> a)
{
    for(i=0;i<a.size();i++)
    {
        for(j=i+1;j<a[i].size();j++)
            swap(a[i][j], a[j][i]);
    }
    return a;
}

void rot90(vector<vector<int>> a)      //rotates matrix 90 deg anti-clockwise ie reversal of rows of transposed matrix
{
    a = transpose(a);
    int n = a.size();
    int low,high;

    for(i=0;i<n;i++)                    // reversing rows of the matrix
    {
        low = 0, high = n-1;
        while(low<=high)
        {
            swap(a[low][i], a[high][i]);
            low++;
            high--;
        }
    }

    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> a = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};
    
    vector<vector<int>> b = transpose(a);
    for(i=0;i<b.size();i++)
    {
        for(j=0;j<b[i].size();j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    
    rot90(a);
}