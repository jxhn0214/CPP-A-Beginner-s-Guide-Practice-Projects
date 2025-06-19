// Demonstrating the if statement

#include <iostream>

int main(){ 
    int a, b, c;

    a = 2;
    b = 3;

    if(a < b) std::cout << "a is less than b\n"; // displays text because a is less than b

    if(a == b) std::cout << "You won't see this\n"; // will not print because a does not equal b

    std::cout << "\n";

    c = a - b; // c will equal -1

    std::cout << "C contains -1\n";
    if(c >= 0) std::cout << "c is non-negative\n";
    if(c <= 0) std::cout << "c is negative\n";

    std::cout << "\n";

    c = b - a; // c will equal 1

    std::cout << "C contains 1\n";
    if(c >= 0) std::cout << "c is non-negative\n";
    if(c <= 0) std::cout << "c is negative\n";

    return 0;    
}