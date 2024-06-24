#include<bits/stdc++.h>
using namespace std;

int hist(vector<int> heights) {
    stack<int> s;
    heights.push_back(0);  // Append a zero to ensure the stack is emptied at the end
    int max_area = 0, index = 0;

    while (index < heights.size()) {
        if (s.empty() || heights[index] >= heights[s.top()]) {
            s.push(index++);
        }
        else {
            int height = heights[s.top()];
            s.pop();
            int width = s.empty() ? index : index - s.top() - 1;
            max_area = max(max_area, height * width);
        }
    }

    heights.pop_back();  // Remove the appended zero
    return max_area;
}

int largest_1s(vector<vector<int>> mat) {
    int r = mat.size(), c = mat[0].size(), i, j;
    int res = hist(mat[0]);

    for(i=1;i<r;i++) {
        for(j=0;j<c;j++) {
            if(mat[i][j]==1)
                mat[i][j] += mat[i-1][j];
        }
        res = max(res, hist(mat[i]));
    }
    return res;
}

int main() {
    vector<vector<int>> a = {{1,0,0,1,1},
                             {0,0,0,1,1},
                             {1,1,1,1,1},
                             {0,1,1,1,1}};

    cout<<largest_1s(a);
}