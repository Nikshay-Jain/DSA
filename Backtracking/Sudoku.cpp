#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> a;
int N,n;

bool isSafe(int row, int col, int n)    //check if it is valid to feed n at i,j posn
{
    int k,r,c;
    for(k=0;k<N;k++)
    {
        if(a[k][col]==n || a[row][k]==n)
            return false;
    }
    int sq = sqrt(N);           //to get the size of subsquares
    int rs = row - (row%sq);
    int cs = col - (col%sq);

    for(r=0;r<sq;r++)
    {
        for(c=0;c<sq;c++)
        {
            if(a[r+rs][c+cs]==n)
                return false;
        }
    }
    return true;
}

bool sudoku()
{
    int i,j;
    for(i=0;i<N;i++)            //to find the 1st blank place
    {
        for(j=0;j<N;j++)
        {
            if(a[i][j]==0)
                break;
        }
    }

    if(i==N && j==N)            //if no blank spaces left, return true
        return true;
    
    for(n=1;n<=N;n++)           //if not, try to fill the blank space with a no n
    {
        if(isSafe(i,j,n))       //check if it is possible to feed n in blank space
        {
            a[i][j] = n;
            if(sudoku())        //recursively call sudoku to move to next blanks
                return true;
            a[i][j] = 0;        //backtrack the solution
        }
    }
    return false;
}

int main()
{
    a = {{1,0,3,0},{0,0,2,1},{0,1,0,2},{2,4,0,0}};
    N = a.size();
    cout<<sudoku()<<endl;
    return 0;
}