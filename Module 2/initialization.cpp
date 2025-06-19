/*
    initializing and dynamically initializing variables
    instead of trying to code a volume of the cylinder i will code the volume of a sphere which is 
    4/3piR^3
*/
#include <iostream>

int main()
{
    int radius = 10; //intializing radius
    double volume = 4/3 * 3.14159625359 * radius; //dynamically intializing volume

    std::cout << "The volume of a sphere with radius size 10 is " << volume << ".";

    return 0;
}