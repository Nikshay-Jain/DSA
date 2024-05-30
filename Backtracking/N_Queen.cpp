#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> sol;
int n;

bool isSafe(int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (sol[row][i])
            return false;
    }
    
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (sol[i][j])
            return false;
    }
    
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (sol[i][j])
            return false;
    }
    return true;
}

bool solveNQueens(int col)
{
    if (col == n)
        return true;
    
    for (int i = 0; i < n; i++)
    {
        if (isSafe(i, col))
        {
            sol[i][col] = 1;
            if (solveNQueens(col + 1))
                return true;
            sol[i][col] = 0;
        }
    }
    return false;
}

int main()
{
    cout << "Enter n: ";
    cin >> n;
    sol = vector<vector<int>>(n, vector<int>(n, 0));
    if (solveNQueens(0))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << sol[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "No solution exists." << endl;
    return 0;
}