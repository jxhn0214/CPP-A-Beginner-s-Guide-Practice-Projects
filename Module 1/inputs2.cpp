/* 
    This program illustrates the difference 
    between int and double.
*/

#include <iostream>

int main()
{
    int ivar;   // this declares the variable "ivar" of type int
    double dvar; // thsis declares the variable "dvar" of type double

    ivar = 100; // assigns the int value of 100 to variable, "ivar"
    dvar = 100.00; // assigns the floating point value of 100.0 to variable, "dvar"

    std::cout << "Original value of ivar: " << ivar << "\n"; // prints "original value of ivar: ___" and then a new line
    std::cout << "Original value of dvar: " << dvar << "\n"; // prints "Original value of dvar: ___" then prints a new line

    std::cout << "\n"; // prints another new blank line

    // now, we divide both variables by 3 

    ivar = ivar / 3;
    dvar = dvar / 3.0;

    std::cout << "Ivar after division: " << ivar << "\n";
    std::cout << "Dvar after division: " << dvar << "\n";

    return 0;
}