#include <iostream>

int main()
{
    int length, width; // Declares both varaibles of type int into one line for standard practice

    std::cout << "Length: "; // Prompts user for length size
    std::cin >> length; // Inputs user's desired length into "length" var

    std::cout << "Width: "; // Prompts user for width size 
    std::cin >> width; // Inputs user's desired width into "width" var

    std::cout << "The area of the rectangle is "; // Prints out area
    std::cout << length * width;    // Did not create new "area" var for standard practice

    return 0;




}