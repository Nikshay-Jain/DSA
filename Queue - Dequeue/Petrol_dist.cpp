#include<bits/stdc++.h>
using namespace std;

int i,j;

//Time: O(2n) and Space: O(n)
int algo1(int p[], int d[], int n)
{
    deque<int> dq = {};
    int curr_petrol = 0;
    i = 0;
    while(dq.size()!=n)                 //to ensure the car is able to return to the starting pertol pump by circular track
    {
        dq.push_back(i%n);
        curr_petrol+=(p[i%n]-d[i%n]);   //check the status of petrol as 1 unit petrol runs car for 1 km
        j = 0;
        while(curr_petrol<0)            //if the amt becomes -ve, remove effects of prev entries from the start until it reaches >=0
        {
            j = dq.front();
            curr_petrol-=(p[j%n]-d[j%n]);
            dq.pop_front();
        }
        i++;
    }
    return dq.front()+1;
}

//Time: O(n) and Space: O(1):
int algo2(int p[], int d[], int n)                      //based on the fact that if the curr_petrol<0 at index i, the journey cannot start from any point before that
{
    int start = 0, prev_petrol = 0, curr_petrol = 0;    // prev_petrol stores the petrol needed to reach sucha point i
    for(i=0;i<n;i++)
    {
        curr_petrol+=(p[i]-d[i]);
        if(curr_petrol<0)
        {
            start = i+1;
            prev_petrol += curr_petrol;
            curr_petrol = 0;
        }
    }
    return ((curr_petrol+prev_petrol)>=0 ? (start+1) : -1);     //starting from i till end, if the sum of tot petrol needed is >=0 --> valid  else not.
}

int main()
{
    cout<<"Enter no of petrol pumps"<<endl;
    int n;
    cin>>n;
    int p[n],d[n];
    cout<<"Enter amt of petrol"<<endl;
    for(i=0;i<n;i++)
        cin>>p[i];
    cout<<"Enter dist"<<endl;
    for(i=0;i<n;i++)
        cin>>d[i];
    cout<<"Deque Algo: Position = "<<algo1(p,d,n)<<endl;
    cout<<"Efficient Algo: Position = "<<algo2(p,d,n)<<endl;
}