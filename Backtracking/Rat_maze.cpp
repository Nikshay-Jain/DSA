#include <bits/stdc++.h>
#include <vector>
using namespace std;

int m, n, i, j;
vector<vector<int>> sol;
vector<vector<int>> a;

bool isValid(int x, int y)
{
    return (x < m && y < n && a[x][y] == 1);
}

bool ratInMaze(int x, int y)
{
    if (x == m - 1 && y == n - 1)
    {
        sol[x][y] = 1;
        return true;
    }

    if (isValid(x, y))
    {
        sol[x][y] = 1;
        if (ratInMaze(x + 1, y))
            return true;
        else if (ratInMaze(x, y + 1))
            return true;
        sol[i][j] = 0;                      //removes the 1 from the matrix if algo fails --> backtracking
    }
    return false;
}

int main()
{
    a = {{1, 1, 0, 1}, {0, 1, 1, 0}, {0, 0, 1, 0}, {0, 0, 1, 1}};
    m = a.size();
    n = a[0].size();
    
    sol = vector<vector<int>>(m, vector<int>(n, 0));

    int t = ratInMaze(0, 0);
    cout << t<<endl;

    if(t==1)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                cout<<sol[i][j]<<" ";
            cout<<endl;
        }
    }
}