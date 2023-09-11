#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "1 chocolate for each rupee or 3 wrappers" << endl;
    cout << "Enter Rs you have" << endl;    
    int n, w = 0, sum = 0;
    cin >> n;
    int c = n;
    while (c > 0)
    {
        w += c;     // Collecting wrappers from bought chocolates
        sum += c;   // Adding bought chocolates to the total
        c = w / 3;  // Exchange wrappers for new chocolates
        w %= 3;     // Remaining wrappers
    }
    cout << sum << " Chocolates with " << w << " wrappers left";
}