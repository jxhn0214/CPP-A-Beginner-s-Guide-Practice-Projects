/* 
Program that computes the delay of a radio signal traveling from earth to mars at the speed of light in seconds and minutes
Mars is approximately 34 million miles away 
Speed of light is approximately 186,000 miles per sec

*/

#include <iostream>

int main()
{
    double distance, lightspeed, delay_in_sec, delay_in_min;
    
    distance = 34000000.0; // distance from mars to earty
    lightspeed = 186000.0; // approximate speed of radio signal

    delay_in_sec = distance / lightspeed; // computes the delay by dividing distance by speed creating the delay in seconds
    delay_in_min = delay_in_sec / 60; // delay in seconds divided by 60 gives minutes 

    std::cout << "Time delay when sending a radio signal to Mars: " << delay_in_sec << " seconds\n";
    std::cout << "Time delay when sending a radio signal to Mars: " << delay_in_min << " minutes\n";

    return 0;
}