#include <iostream>
#include <vector>
using namespace std;

int i,j;
void transpose(vector<vector<int>> &a)
{
    for(i=0;i<a.size();i++)
    {
        for(j=i+1;j<a[i].size();j++)
            swap(a[i][j], a[j][i]);
    }
}

void rot90(vector<vector<int>> &a)      //rotates matrix 90 deg anti-clockwise ie reversal of rows of transposed matrix
{
    transpose(a);
    int n = a.size();
    int low,high;

    for(i=0;i<n;i++)
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
    int m,n,t;
    cout<<"Enter order of matrices"<<endl;
    cin>>m>>n;
    cout<<"Enter matrix"<<endl;
    vector<vector<int>> a;

    for(i=0;i<m;i++)
    {
        vector<int> v;
        for(j=0;j<n;j++)
        {
            cin>>t;
            v.push_back(t);
        }
        a.push_back(v);
    }
    cout<<endl;
    rot90(a);
}