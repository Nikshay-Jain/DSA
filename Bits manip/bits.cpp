#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=5;
    unsigned int j=1;                       //32-bit no representation so max val is 2^32 -1 ie 111....11 ie 32 1's
    cout<<"Left Shift "<<(i<<1)<<endl;      //0101 --> 1010     ie x*(2^y)
    cout<<"Right Shift "<<(i>>1)<<endl;     //0101 --> 0010     ie gif or floor(x/(2^y))
    cout<<"Negate "<<(~j)<<endl;            //0001 --> 1110     ie 2^n - x where n is no of bits used to represent the no.
    cout<<"Negate "<<(~i)<<endl;            /* for signed nos, 1st bit is for sign (0==+ve and 1==-ve) so rest 31 bits for no.
                                            Due to 2's complement representation of -ve nos, a no x is represented as 2^n -x
                                            So in 3 bit representation, -2 is: 2^3 -2 (decimal)==> 6 ==> 110 (binary)
                                            Here, 1st '1' is for -ve and rest '10' is for 2.
                                            So, 2^n - 1 - x to be mapped with 2^n - y so, for x as 5, y is 6.
                                            So 00...00101 --> 11...11010 so 2^32 - 6 which means -6 */
    
    cout<<"Bitwise AND "<<(i&j)<<endl;      //0001 & 0101 --> 0001 ie 1
    cout<<"Bitwise OR "<<(i|j)<<endl;       //0001 | 0101 --> 0101 ie 5
    cout<<"Bitwise XOR "<<(i^j)<<endl;      //0001 ^ 0101 --> 0100 ie 4
}