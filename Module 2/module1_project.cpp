/* 
A project that goes over the majority of things I learned in module 1 of  C++ a beginner's guide 

Prompt: The moon’s gravity is about 17 percent that of Earth’s. Write a program that displays a table that
shows Earth pounds and their equivalent moon weight. Have the table run from 1 to 100 pounds.
Output a newline every 25 pound
*/

#include <iostream>

int main ()
{ 
    double earthlbs, moonlbs, counter; 
    counter = 0;
    
    for (earthlbs = 1; earthlbs <= 100; earthlbs++)
    {
        moonlbs = earthlbs * .017;
        std::cout << earthlbs << " pounds is " << moonlbs << " pounds on the moon.\n";
        counter ++;

        if (counter == 25)
        {
            std::cout << "\n";
            counter = 0;
        }
    }

    return 0;
}