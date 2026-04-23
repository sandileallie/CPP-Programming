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



}

void random(){

   int num_1, num_2;

   srand(time(0));

   num_1 = rand() % 6 + 1;
   num_2 = rand() % 10;

   std::cout << num_1 << '\n';
   std::cout << num_2;


}

void roll(){

    int die_1, die_2, sum = 0, total_role = 0, num  = 0;

    srand(time(0));

    do{
        die_1 = rand() % 7;
        die_2 = rand() % 7;
        sum = die_1 + die_2;
        total_role++;
    }while( sum != num);

    std::cout << "You rolled : " << total_role ;

}


void authentication(){

    int generated_code, code, increment, index_1, index_2;
    std::string OTP;

    srand(time(0));
    increment = rand() % 9000;
    generated_code = (rand() % 1001) + increment;
    index_1 = rand() % 24 + 1;
    index_2 = rand() % 24 + 1;

    std::string alpha_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string alpha_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string verification_code = alpha_1[index_1]+std::to_string(generated_code)+alpha_2[index_2];


    std::cout << "Your verification code is : " << verification_code << '\n';

    std::cout << '\n';

    std::cout << "Enter the code on your display STARTING WITH THE FIRST LETTER FOLLOWED BY THE INTEGER AND LAST LETTER : " << '\n';
    std::cin >> OTP;

    if(OTP == verification_code){
        std::cout << "authentication successful!!! You are a human";
    }
    else{
        std::cout << "authentication not successfull!!! You are not a human";
    }

}


void cast(){

    int x = 100;
    std::string num = std::to_string(x);

    std::cout << num;

}


int main()
{

    authentication();
    //cast();

    return 0;
}
