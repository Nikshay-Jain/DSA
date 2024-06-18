#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"Traversal"<<endl;
    while(q.empty()==false)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}