// Pass arg 'by ref' vs 'by value' 15.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//15.5 
//in this program we will compare pass by reference with pass by value. When passing an argument by value, a COPY of the argument's value is made and passed (on the function call stack)
// to the called function. When an argument is passed by reference the caller gives the called function the ability to acecess the caller's data directly, and to modify that data if the 
//called function chooses to do so. 

#include <iostream>
using namespace std;

//function prototypes 
int squareByValue(int); //pass by value
void squareByReference(int&); //pass by reference (hence ampersand (&) )

int main()
{
    //demonstrate squareByValue 
    int x = 2;
    cout << "x = " << x << " before squareByValue\n";

    cout << "Value returned by squareByValue: " << squareByValue(x) << endl;

    cout << "x = after squareByValue is: " << x << "\n";

    //demonstrate squareByReference
    int z = 4;
    cout << "z = " << z << " before squareByReference\n";

    squareByReference(z);

    cout << "z = after squareByReference is: " << z << "\n";

}

// squareByValue multiplies number by itself, stores the result in number, and returns the new value of number
int squareByValue(int number)
{
    return number *= number; // callers argument not modified
}

// squareByReference multiples numberRef by itself and stores the result in the variable to which numberRef refers in the caller
void squareByReference(int& numberRef)
{
    numberRef *= numberRef; //callers argument modified
}

//the result shows how in pass by value, the original value is not modified while the original vallue IS modified with pass by reference