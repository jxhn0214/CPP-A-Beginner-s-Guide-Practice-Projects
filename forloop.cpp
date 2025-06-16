// Program that demonstrates the for loop 

#include <iostream>

int main()
{
    int count;

    for(count = 1; count <= 100; count = count++) // intialization at 1, condition up to 100, increments by 1 each iteration
        std::cout << count << "\n"; // statement prints one number for each line untill 100
    
    return 0;
}
