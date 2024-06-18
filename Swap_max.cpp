#include <bits/stdc++.h>
using namespace std;

int largestNum(int num)
{
    int max_digit = -1;
    int max_digit_indx = -1;
    int l_indx = -1;
    int r_indx = -1;

    string num_in_str = to_string(num);
    for (int i = num_in_str.size() - 1; i >= 0; i--)
    {
        // current digit is the largest by far
        if (num_in_str[i] > max_digit)
        {
            max_digit = num_in_str[i];
            max_digit_indx = i;
            continue;
        }

        if (num_in_str[i] < max_digit)
        {
            l_indx = i;
            r_indx = max_digit_indx;
        }
    }

    // check for is number already in order
    if (l_indx == -1)
        return num;

    swap(num_in_str[l_indx], num_in_str[r_indx]);
    return stoi(num_in_str);
}

int main()
{
    int num = 789;
    cout<<"Only 1 swap allowed"<<endl;
    cout << largestNum(num) << endl;
    num = 49658;
    cout << largestNum(num) << endl;
    num = 2135;
    cout << largestNum(num) << endl;
}