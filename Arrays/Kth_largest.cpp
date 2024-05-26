#include <bits/stdc++.h>
using namespace std;

int findKthLargest(std::vector<int> &nums, int k)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    for (int num : nums)
    {
        minHeap.push(num);
        if (minHeap.size() > k)
            minHeap.pop();
    }
    return minHeap.top();
}

int main()
{
    std::vector<int> a = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int k = 4;
    cout<<"kth largest element: "<<findKthLargest(a,k);
}