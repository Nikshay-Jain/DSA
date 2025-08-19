#include<bits/stdc++.h>
using namespace std;

void inc1(int i) //Pass by value
{
    i+=10;
}

void inc2(int *p) //Pass by reference
{
    *p+=10;
}

int main()
{
    int i = 10;
    int *p = &i;
    cout<<"p is: "<<p<<endl;
    cout<<"*p is: "<<*p<<endl;      //Value that is pointed to by p is given by *p
    p++;
    cout<<"p++ is: "<<p<<endl;      //Inc by 4 as int occupies 4 bytes.
    cout<<endl;
    
    char ch='a';
    char *chptr=&ch;
    cout<<"chptr "<<chptr<<endl;
    cout<<"*chptr "<<*chptr<<endl;
    chptr++;
    cout<<"chptr++ "<<chptr<<endl;
    cout<<"*chptr++ "<<*chptr<<endl;
    cout<<endl;

    int **q=&p;
    cout<<"q is: "<<q<<endl;
    cout<<"*q is: "<<*q<<endl;
    cout<<"**q is: "<<**q<<endl;
    cout<<endl;
    
    inc1(i);        /* a local var is created having only val of i and that is passed to inc1.
                    So no change in actual i --> Pass by value. */
    cout<<"Pass by value: "<<i<<endl;
    
    inc2(&i);       /*Giving pointer access is Pass by reference*/
    cout<<"Pass by reference: "<<i<<endl;
    cout<<endl;

    int a[]={1,2,3,4,5};
    cout<<"*a: "<<*a<<endl;
    cout<<"a: "<<a<<endl;     //a is storing the address of 1st element.

    int *ptr = a;       //it also means int *ptr = a[0]
                        //ptr = ptr + 1 is same as *ptr = a[1], ie incrementing the hexadecimal location value it pointer now points at next no in the array.
                        //*ptr = *ptr + 1 would mean incrementing the  value at a[0] by 1

    for(i=0;i<5;i++) // method 1
    {
        cout<<*(a+i)<<endl;
        //a++;      Illegal as array is const pointer and also indexing poiner ie, it goes to nest index not next memory location.
    }
    cout<<endl;

    for(i=0;i<5;i++) // method 2
    {
        cout<<*ptr<<endl; // arrayy elements
        ptr++;
    }
    cout<<endl;
    ptr = a;
    for(i=0;i<5;i++) // method 2
    {
        cout<<ptr<<endl; // array memory locations
        ptr++;
    }
    //If p and q are pointing on elements of same array, we can use ==, !=, >=, <= operators on the pointers (not the values they are pointing to)
}