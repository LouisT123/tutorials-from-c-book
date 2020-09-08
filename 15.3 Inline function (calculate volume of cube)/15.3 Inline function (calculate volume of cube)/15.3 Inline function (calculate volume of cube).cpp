// 15.3 Inline function (calculate volume of cube).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Why use an inline function? Well as explained on page 556, an inline function helps reduce functions call overhead, basically generate
//a copy of a function's code in place to avoid a function call and save proccessing time at the cost of a larger program size. 
//Louis Taing 9/7/2020 c++ book review

#include <iostream>
using namespace std;

 
//inline function cube definition (first line of the function definition is the function prototype)
inline double cube(const double side)
{
    return side * side * side; //calculate the volume of the cube (cubing length of sides)
}

int main()
{
    double sideValue;

    for (int i = 1; i <= 1; i++) //for loop (run loop once in this case)
    {
        cout << "\nEnter the side length of your cube: ";
        cin >> sideValue;

        //calculate with inline function and display result
        cout << "Volume of the cube with side " << sideValue << " is " << cube(sideValue) << endl;
    }
}
