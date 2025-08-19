#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[8] = "nikshay";    //automatically, 1 byte memory is needed for null character '\0'
    cout<<str<<endl;

    const char *a1 = "Hello World";   //(1) pointer to const string ie string cannot change but pointer may change the value it is pointing to
    char a2[] = "Hello World";  //(2) const pointer to string ie pointer cannot point to anything else than this string
    char a3[6] = "World";
    cout<<a1<<endl;
    cout<<a2<<endl;
    cout<<a3<<endl;

    a1 = a2;                    //valid
    a2[1] = 'u';                //undefined behaviour if done for a1 due to (1) but valid for a2
    //a2 = a3;                  //compiler error due to (3)
    cout<<a1<<endl;
    cout<<a2<<endl;
    cout<<a3<<endl;

    /* const char: This indicates a single read-only character. It means that the value of the character cannot be changed once it is assigned.
    
    const char ch = 'A';
    // ch = 'B'; // This assignment would be invalid as ch is read-only
    const char*: This represents a pointer to a constant character or a string literal. It means that the content of the character or string literal cannot be modified through the pointer. For example:

    const char* str = "Hello";
    // str[0] = 'C'; // This assignment would be invalid as str points to a constant character
    // str = "World"; // This assignment is valid as the pointer itself can be changed */
}