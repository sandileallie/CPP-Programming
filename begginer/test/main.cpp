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

void volunteer(){

    int num_v,num_s, sum;
    std::string Name_v;
    std::cout << "num_v : " << '\n';
    std::cin >> num_v;

    for(int i = 0; i < num_v; i++){
        std::cout << "Name_v : " ;
        std::cin >> Name_v;
        std::cout << '\n';
        std::cout << "Num_s : ";
        std::cin >>num_s;
        std::cout << '\n';
        sum = sum + num_s;
    }
    std::cout << "Total sold : " << sum << '\n';
    std::cout << "Total rev : " << sum*10 << '\n';

}

void finde(){

    std::string word = "cdfeccc";
    char word_f = 'c';
    int index = word.length();
    int countt = 0;

    for(int i = 0 ; i < index ; i++){
        if(word_f == word[i]){
            countt = countt + 1;
        }
    }
    std::cout << countt;


}

void while_loop(){

    int i = 0;
    while(i < 5){
        int j = 1;
        while(j <=i){
            std::cout << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= 5 - i){
            std::cout << "* ";
            k = k + 1;
        }
        std::cout <<'\n';
        i = i + 1;

    }

}

void test(){

    int i = 1;
    int k = 1;
    while(i <= 5){
        while(k <= i){
            std::cout << k ;
            k = k + 1;
        }
        std::cout << i << '\n';
        i = i + 1;
    }

}

void SNEH(){

    int x = 1, y = 1 , x1 = 1, x2 = 1, x3 = 1, x4 = 1, y4 = 1, x5 = 1, y5 = 1, x6 = 1;
    while(x <= 5){
        while(y <= 5){
            std::cout << "S";
            y = y + 1;
        }
        std::cout << "S" << '\n';
        x = x + 1;
    }
    while( x1 <= 5){
        std::cout << "S";
        x1 = x1 + 1;
    }
    while(x2 <= 5){
        int y2 = 1;
        while(y2 <=5){
            std::cout << " ";
            y2 = y2 + 1;
        }
        std::cout << "S" << '\n';
        x2 = x2 + 1;
    }
    while( x3 <= 5){
        std::cout << "S";
        x3 = x3 + 1;
    }

    std::cout << '\n';
    std::cout << '\n' ;

    while(x4 <= 6){
        while(y4 <= 5){
            std::cout << "N";
            y4 = y4 + 1;
        }
        std::cout << "N" << "    " << "N" << '\n';
        x4 = x4 + 1;
    }

    std::cout << '\n';

    while(x5 <= 6){
        while(y5 <= 5){
            std::cout << "E";
            y5 = y5 + 1;
        }
        std::cout << "E" << '\n';
        if(x5 == 3){
            int w = 1;
            while( w <= 5){
                std::cout << "E";
                w = w + 1;
            }
        }
        x5 = x5 + 1;
    }
    while(x6 <= 6){
        std::cout << "E";
        x6 = x6 + 1;
    }

    std::cout << '\n';
    std::cout << '\n';

    int row = 1;
    while (row <= 7) {
        int col = 1;
        while (col <= 5) {
            if (col == 1 || col == 5 || row == 4) {
                std::cout << "H";
            }
            else {
                std::cout << " ";
            }
            col++;
        }
        std::cout << '\n';
        row++;
    }

    int q = 1;
    while( q <= 5){
        std::cout << '\n';
        q = q + 1;
    }





}



int main()
{

    //authentication();
    //cast();
    //telephone();
    //volunteer();
    //while_loop();
    //test();
    //while_loop();
    SNEH();

    return 0;
}
