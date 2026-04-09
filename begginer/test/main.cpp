#include <iostream>
#include <cstdlib>
#include <cmath>

void abso(){

    // Write a program that tells you the number that you have entered is a positive numbe, if its a negative number it returns its absolute value.

    int number;
    std::cout << "Enter an interger : " << '\n';
    std::cin >> number;

    if (number > 0){
        std::cout << "You have entered a positve number : " << number << '\n';
    }
    else{
        std::cout << "The number you have entered is a negative number and its abs is " << abs(number);
    }

}


void asce(){

    // Write a program that prompts you to input 3 numbers, the program should then output the numbers in asceding order

    int num_1, num_2, num_3;
    std::cout << "Enter 3 numbers : " << '\n';
    std::cin >> num_1
             >> num_2
             >> num_3;

    if (num_1 < num_2 && num_2 < num_3){
        std::cout << num_1 << " " << num_2 << " " << num_3 << '\n';
    }
    else if(num_1 > num_2 && num_2 > num_3){
        std::cout << num_3 << " " << num_2 << " " << num_1 << '\n';
    }
    else if(num_1 < num_2  && num_2 > num_3 && num_1 > num_3){
        std::cout << num_3 << " " << num_1 << " " << num_2 << '\n';
    }
    else if(num_1 < num_2  && num_2 > num_3 && num_3 > num_1){
        std::cout << num_1 << " " << num_3 << " " << num_2 << '\n';
    }
    else if(num_1 > num_2  && num_2 < num_3 && num_3 > num_1){
        std::cout << num_2 << " " << num_1 << " " << num_3 << '\n';
    }
    else if(num_1 > num_2  && num_2 < num_3 && num_3 > num_1){
        std::cout << num_2 << " " << num_3 << " " << num_1 << '\n';
    }

}

void stare(){

for (int i = 0; i <= 5 ; ++i){
    for (int y = 0; y <= 6-i ; ++y){
        std::cout << " ";
    }
    for (int z = 0; z <= i; ++z){
        std::cout << z << " ";
    }
    std::cout << '\n';
}

}



int main()
{

    //asce();
    stare();

    return 0;
}
