// using an operator 

#include <iostream>

int main()
{
    int length; //this declares the variable 
    int width; //this declares another variable
    int area; //this declares a third variable

    length = 7; // this assigns the int 7 to length
    width = 5; // this assigns the int 5 to width 

    area = length * width; // computes the area with variables

    std::cout << "The area is "; // this displays "The area is "
    std::cout << area; // this displays "35"

    return 0;


}