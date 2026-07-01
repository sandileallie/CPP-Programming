#include <iostream>


void chapter2Question12(){

    /* Write a program that prompts the capacity, in gallons, of an automobile
    fuel tank and the miles per gallon the automobile can be driven. The
    program outputs the number of miles the automobile can be driven
    without refueling. */

    double capacity_gallons;
    std::cout << "Enter capacity othe car in gallons : ";
    std::cin >> capacity_gallons;
    std::cout << '\n';
    double mile_p_gallon;
    std::cout << "Enter miles per gallons : ";
    std::cin >> mile_p_gallon;
    std::cout << '\n';

    double miles = mile_p_gallon * capacity_gallons;

    std::cout << "number of miles you can travel : " << miles;

}

void chapter2Question13(){

    /* Write a C++ program that prompts the user to input the elapsed time for
    an event in seconds. The program then outputs the elapsed time in hours,
    minutes, and seconds. (For example, if the elapsed time is 9630 seconds,
    then the output is 2:40:30.) */

    int seconds, minutes, hours;
    int remaining = seconds % 3600;
    std::cout << "input the elapsed time for an event in seconds : ";
    std::cin >> seconds;
    std::cout << '\n';
    minutes = (seconds % 3600) / 60;
    hours = seconds / 3600 ;
    seconds = (seconds % 3600) % 60;

    std::cout << hours << ":" << minutes << ":" << seconds;

}

void chapter2Question14(){

    /*Write a C++ program that prompts the user to input the elapsed time for
    an event in hours, minutes, and seconds. The program then outputs the
    elapsed time in seconds.*/

    int hours, minutes, seconds;
    std::cout << "Enter hours : " ;
    std::cin >> hours;
    std::cout << '\n';

    std::cout << "Enter minutes : " ;
    std::cin >> minutes;
    std::cout << '\n';

    std::cout << "Enter seconds : " ;
    std::cin >> seconds;
    std::cout << '\n';

    int hoursToSecond = hours * 3600;
    int minutesToSecond = minutes * 60;
    int totalSeconds = hoursToSecond + minutesToSecond + seconds;

    std::cout << "elapsed time in seconds : " << totalSeconds;


}

int main(){

    chapter2Question14();


    return 0;

}




