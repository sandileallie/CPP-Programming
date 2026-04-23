#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <cstdlib>



void practice(){

    switch(1){
        case 1:
        std::cout << "It is the first variable" << "\n";
        break;
        case 2:
        std::cout << "It is the second variable" << "\n";
        break;
    }
}

void output(){
    // Using the output operator/function

    std::string igama;
    std::string isbongo;
    int umnyaka ;
    double isisindvo ;


    std::cout << "Faka igama lakho: " <<'\n';
    std::cin >> igama;

    std::cout << "Faka isbongo: " << '\n';
    std::cin >> isbongo;

    std::cout << "Faka umnyaka wakho: " << '\n';
    std::cin >> umnyaka;

    std::cout << "Faka isisindvo sakho: ";


}




void example_1(){

/*
Given length in inches, we write a program that determines and outputs the equivalent
length in feet and (remaining) inches. Now there are 12 inches in a foot. Therefore, 100
inches equals 8 feet and 4 inches; similarly, 55 inches equals 4 feet and 7 inches. Note
that 100 / 12 = 8 and 100 % 12 = 4; similarly, 55 / 12 = 4 and 55 % 12 = 7. From these
examples, it follows that we can effectively use the operators / and % to accomplish our
task. The desired program is as follows:
*/
    int inches = 100;
    int feet = inches/12;
    int inche = inches%12;

    std::cout << feet << " and " << inche;

}


void class_exc(){

    //2 to the power of 6
    //12.5 to the power of 3
    // sqr of 24
    //the value of u
    // length of a string


    int power = pow(2,6);

    std::cout << "The value of 2 to the power of 6 is : "
         << power << '\n';


    double sqr = pow(24.0, 0.5);
    std::cout << "The value of 2 to the power of 6 is : "
         << sqr << '\n';

    int u = 24;
    std::cout << "The value of u is : "
         << u << '\n';

    std::string name = "Sandile mashaba";
    std::cout << "The lengt of string name = :" << name.length() << '\n';

}


void lecture_3(){

    int x =25;
    int y = 33;

    std::cout << x / y << '\n';
    std::cout << "Hello there." << '\n';
    std::cout << 12 << '\n';
    std::cout << "x + y" << '\n';
    std::cout << 4 + 7 << '\n';
    std::cout << 'A' << '\n';
    std::cout << "x + y = " << 4 + 7 << '\n';
    std::cout << 2 + 3 * 5 << '\n';
    std::cout << "Hello \nthere." << '\n';
    std::cout << "Hello world!" << '\n';

}


void lecture_4(){

    /*double z;
    char c;
    int a;


    cin >> z >> c >> a;

     cin >> z >> ch >> a; input is: 23.63C39
    */

/*
 const int M = 1000;
 const int D = 500;
 const int C = 100;
 const int L = 50;
 const int X = 10;
 const int V = 5;
 const int I = 1;

if ( M == Roman_numeral ){
    cout << "The value of M is : " << M << '\n';
 }

 else if (M == Roman_numeral){
    cout << "The value of D is : " <<  D << '\n';
 }

 else if (C == Roman_numeral){
    cout << "The value of C is : " <<  C << '\n';
 }

 else if (L == Roman_numeral){
    cout << "The value of L is : " <<  L << '\n';
 }

 else if (X == Roman_numeral){
    cout << "The value of X is : " <<  X << '\n';
 }

 else if (V == Roman_numeral){
    cout << "The value of V is : " <<  V << '\n';
 }

 else if (I == Roman_numeral){
    cout << "The value of I is : " << I << '\n';
 }

 else{
    cout << "You dont have a Roman numeral";
 }

*/


/*
 Write a program to input a Roman numerals and convert into arabic numerals
 Roman numerals:
 M = 1000
 D = 500
 C = 100
 L = 50
 X = 10
 V = 5
 I = 1


 const int M = 1000;
 const int D = 500;
 const int C = 100;
 const int L = 50;
 const int X = 10;
 const int V = 5;
 const int I = 1;


 char Roman_numeral;
 char roman;

 cout << "Enter yor roman numeral: ";
 cin >> Roman_numeral;

 cin >> roman;
 cout << "The roman figure " << Roman_numeral << " is : " << roman << '\n';



 //Write a program to input a Roman numerals and convert into arabic numerals
 /* Roman numerals:
 M = 1000
 D = 500
 C = 100
 L = 50
 X = 10
 V = 5
 I = 1
 */

/*
 int M = 1000;
 int D = 500;
 int C = 100;
 int L = 50;
 int X = 10;
 int V = 5;
 int I = 1;

 char Roman_numeral;


 cout << "Enter yor roman numeral: ";
 cin >> Roman_numeral;

 cin >> M,D,L,X,V,L;
 cout << "The roman figure " << Roman_numeral << " is : " << M << '\n';

 */

}


void Roman_numeral(){

    char roman_numeral[7] = {'M','D','L','C','X','V','L'};
    int num[7] = {100,500,100,50,10,5,1};
    char found = 'L';

    auto in = std::find(std::begin(roman_numeral), std::end(roman_numeral), found);

    int index = in - std::begin(roman_numeral);

    std::cout << num[index] ;

}


void revise(){
    //***************************************************************
    // Author: D.S. Malik
    //
    // This program shows where the include statements, using
    // statement, named constants, variable declarations, assignment
    // statements, and input and output statements typically appear.
    //***************************************************************
    const int number = 5;
    int firstnum ;
    int secondnum ;

    firstnum = 18;
    std::cout << "firstnum = " << firstnum << '\n';

    std::cout << "Enter an integer : " <<'\n';
    std::cin >> secondnum ;

    std::cout << "Secondnum = " << secondnum <<'\n';

    firstnum = firstnum + number + 2*secondnum;

    std::cout << "the new value of"
        << "firstnum = " << firstnum << '\n';




}

void lecture_5()
{
     int A = 10;
    double B = 20;
    int C = 30;
    int D = 40;

    /*int A , C, D;
    double B; */

    std::cout << "Enter 4 intergers : " << '\n';

    std::cin >> A
        >> B
        >> C
        >> D;

    std::cout << "The numbers you have entered are : A= " << A << " B= " << B << " C = " << C << " D= " << D;


    //second sample output: 23 235.59 22 98
    // cin.clear();
    // cin.ignore()
    // getline(cin , Mystring)



    // the following program finds the absolute valeu of an integer

    int number, temp;

    std::cout << "Enter intergers : " << '\n';

    std::cin >> number;
    temp = number;

    if (temp > 0){
        std::cout << "The interger " << temp << " is a positive number" << 'ln';
    }

    else if (temp < 0){
        int abs_number =  abs(temp);
        std::cout << "The absolute value of " << temp << " is " << abs_number ;
    }

}

void lecture_6(){

    //Calculating extra time Wages

   double hours, rate, wages ;

   std::cout << "Enter your hours: " << '\n';
   //std::cout << fixed << showpoint << setprecision(2);
   std::cin >> hours
       >> rate;

   if (hours > 40){
    wages = 40.0 * rate + 1.5* rate * (hours - 40.0);
    std::cout << "Your wages including extra hours for this month is : " << wages << '\n';
   }

   else{
    wages = hours * rate;
    std::cout << "Your wages for this month is R: " << wages ;
   }


    //Calculating Tstudent grades

    double grade;
    std::cout << "Enter grade : " << '\n';
    std::cin >> grade ;

    if ( grade > 90){
        std::cout << "Your grade is a A : " << grade << '\n';
    }
    else if ( grade > 80){
        std::cout << "Your grade is a B  : " << grade << '\n';
    }

     else if ( grade > 70){
        std::cout << "Your grade is a C : " << grade << '\n';
    }

     else if ( grade > 60){
        std::cout << "Your grade is a D : " << grade << '\n';
    }

     else if ( grade < 50){
        std::cout << "Your grade is a F : " << grade << '\n';
    }


   //Comparing Two numbers and output the largest

    int num_1 , num_2;
    std::cout << "Enter num_1 and num_2 : " << '\n';
    std::cin >> num_1
        >> num_2;

     std::cout << "The Two numbers you have entered are " << num_1 << " and " << num_2 << '\n';

    if ( num_1 > num_2 ){
        std::cout << "The largest number is  " << num_1  << '\n';
    }

    else if ( num_1 < num_2 ){
        std::cout << "The largest number is " << num_2  << '\n';
    }


}

void lecture_7(){

    int num;
    std::cout << "Enter a nuber from 0 to 10 : ";
    std::cin >> num;

    switch(num){
case 0 :
    std::cout << "The number " << num  << " is in range";
    break;

case 2 :
    std::cout << "The number " << num  << " is in range";
    break;

case 3 :
    std::cout << "The number " << num  << " is in range";
    break;

case 4 :
    std::cout << "The number " << num  << " is in range";
    break;

case 5 :
    std::cout << "The number " << num  << " is in range";
    break;

case 6 :
    std::cout << "The number " << num  << " is in range";
    break;

case 7 :
    std::cout << "The number " << num  << " is in range";
    break;

case 8 :
    std::cout << "The number " << num  << " is in range";
    break;

case 9 :
    std::cout << "The number " << num  << " is in range";
    break;

case 10 :
    std::cout << "The number " << num  << " is in range";
    break;

default:
    std::cout << "The number you have entered " << num << " is not in range";

    }
}

void lecture_7_1(){

    int score;
    std::cout << "Enter a score : ";
    std::cin >> score ;
    char grade;

    switch(score / 10){

case 0:
case 1:
case 2:
case 3:

case 4 :
    grade = 'F';
    std::cout << "grade : " << grade ;
    break;

case 5 :
    grade = 'E';
    std::cout << "grade : " << grade ;
    break;

case 6 :
    grade = 'D';
    std::cout << "grade : " << grade ;
    break;

case 7 :
    grade = 'C';
    std::cout << "grade : " << grade ;
    break;

case 8 :
    grade = 'B';
    std::cout << "grade : " << grade ;
    break;

case 9 :
    grade = 'A';
    std::cout << "grade : " << grade ;
    break;

case 10 :
    grade = 'A';
    std::cout << "grade : " << grade ;
    break;


default:
    std::cout << "The score you have entered is invalid ";
    }

}



void gender_1_lecture_7(){


    // Write c++ statement that output Male if the gender is 'M', Female if the genger is 'F', and invalid gender otherwise

    char gender;
    std::cout << "Enter your gender: M if you are Male and F if you are a Female " << '\n';
    std::cin >> gender;

    if (gender == 'M'){
        std::cout << "Male";
    }

    else if (gender == 'F'){
        std::cout << "Female";
    }

    else {
        std::cout << "invalid gender";
    }


}

void gender_2_lecture_7(){

    char gender;
    std::cout << "Enter your gender: M if you are Male and F if you are a Female " << '\n';
    std::cin >> gender;

    switch(gender){
    case 'M':
        std::cout << "Male";
        break;
    case 'F':
        std::cout << "Female";
        break;
    default:
        std::cout << "invalid gender";

    }


}

void ascending_order_lecture_7(){

    // Write a program that prompts you to input 3 numbers, the program should then output the numbers in asceding order

    //Method 1

    int num1, num2, num3;
    std::cout << "Enter 3 numbers :";
    std::cin >> num1
        >> num2
        >> num3;

    if( num1 > num2 && num2 > num3){
        std::cout << num3 << " " << num2 << " " << num1;
    }

    else if ( num1 < num2 && num2 < num3){
        std::cout << num1 << " " << num2 << " " << num3;
    }

    else if ( num1 < num2 && num2 > num3){
            if (num3 < num1){
                std::cout << num3 << " " << num1 << " " << num2;
            }
            else if (num3 > num1){
                std::cout << num1 << " " << num3 << " " << num2;
            }

    }

    else if ( num1 > num2 && num2 < num3){
            if (num3 < num1){
                std::cout << num2 << " " << num3 << " " << num1;
            }
            else if (num3 > num1){
                std::cout << num2 << " " << num1 << " " << num3;
            }
    }

    //Method 2

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




void bill_lecture_8(){

    // Bill program for vodacom

    int account_number, num_min_day, num_nin_night;
    char service_code;

    std::cout << "Enter account number : " << '\n';
    std::cin >> account_number;

    std::cout << "Enter a service code : " << '\n';
    std::cin >> service_code;

    std::cout << "Enter number of minutes used during day" << '\n';
    std::cin >> num_min_day;


    double regular_rate = 0.20, premium_rate_day = 0.10, premium_rate_night = 0.05;



    if ( service_code == 'r' ){

        std::cout << "You are a regular member " << '\n';

        int num_used = abs(num_min_day-50) ;
        double amount_used = num_used*regular_rate;
        double amount_left = 100 - amount_used;

        std::cout << "you have used " << num_min_day << " minutes " << '\n';

        if (num_min_day < 50){

            std::cout << "The amount left in your account is " << " R" << 50 << '\n';

        }

        else if ( num_min_day > 50 && amount_left > 0 ){

            std::cout << "The amount left in your account is " << amount_left << '\n';

        }

        else if ( num_min_day > 50 && amount_left < 0 ){

            double amount_owe = abs(amount_left)-100;

            std::cout << "The amount you owe in your account is " << amount_owe << '\n';
        }

    }



     else if (service_code == 'p'){
            std::cout << "You are a premium member " << '\n';

            std::cout << "Enter number of minutes used during night" << '\n';
            std::cin >> num_nin_night;

            std::cout << "you have used " << num_min_day << " minutes during the day" << '\n';
            std::cout << "you have used " << num_nin_night << " minutes during the night" << '\n';

            int num_used_day = abs(num_min_day-75) ; // 75-100=35
            int num_used_night = abs(num_nin_night-100) ; //100-130=30  >> total = 35+30=65
            int extra_min = num_used_day + num_used_night;
            double amount_used = extra_min*premium_rate_day;
            double amount_left = 120 - amount_used;

            std::cout  << '\n';

            if(num_min_day < 75 && num_nin_night < 100){

                std::cout << "The amount left in your account is " <<" R" << 120 << '\n';

            }

            else if ( num_min_day > 75 && num_nin_night > 100 && amount_left > 0){

                std::cout << "The amount left in your account is " << amount_used << '\n';

            }

            else if ( num_min_day > 75 && num_nin_night > 100 && amount_left < 0){
                double amount_owe = abs(amount_left)-120;

                std::cout << "The amount you owe in your account is " << amount_used << '\n';

            }

        }

    }




void vodacom_bill(){

    int account_num, no_of_min_day, no_of_min_night;
    double rate_regular = 0.20, rate_premium_day = 0.10, rate_premium_night = 0.05;
    char service_code;

    std::cout << "Enter account number : " << '\n';
    std::cin >> account_num;

    std::cout << "Enter service code : " << '\n';
    std::cin >> service_code;


    if(service_code == 'r'){
            std::cout << "regular account" <<'\n';

            std::cout << "Enter number of minutes used today : " << '\n';
            std::cin >> no_of_min_day;
            std::cout << "You have used " << no_of_min_day << " Minutes today " << '\n';

            int no_of_min_left = no_of_min_day - 50, extra_min = abs(no_of_min_left);
            double amount_left = extra_min*rate_regular;
            double amount_owe = 100-amount_left;

            if(no_of_min_day < 50){
                std::cout << "Amount left " << " R" << 100 << '\n';
            }
            else if (no_of_min_day > 50 && amount_owe > 0){
                std::cout << "Amount owed " << " R" << amount_left << '\n';
            }
            else if (no_of_min_day > 50 && amount_owe < 0){
                std::cout << "Amount owed " << " R" << abs(amount_owe) << '\n';
            }
        }


    else if(service_code == 'p'){
        std::cout << "Premium account " << '\n';

        std::cout << "Enter number of minutes used today : " << '\n';
        std::cin >> no_of_min_day;
        std::cout << "Enter number of minutes used at night : " << '\n';
        std::cin >> no_of_min_night;

        std::cout << "You have use " << no_of_min_day << " Minutes today " << '\n';
        std::cout << "You have used " << no_of_min_night << " Minutes during night time " << '\n';

        int no_of_min_left = no_of_min_day-75, no_of_min_night_left=no_of_min_night-100;
        double amount_left = abs(no_of_min_left)*rate_premium_day, amount_left_night = abs(no_of_min_night_left)*rate_premium_night;
        double total_amount_left = abs(120-(amount_left + amount_left_night));
        double amount_owe = 120-total_amount_left;

        if ( no_of_min_day < 75 && no_of_min_night < 100){
            std::cout << "Your amount is " << "R" << 120 << '\n';
        }
        else if (no_of_min_day > 75 && no_of_min_night > 100 && amount_owe > 0){
                std::cout << "Amount left " << " R" << total_amount_left << '\n';
            }
        else if(no_of_min_day > 75 && no_of_min_night > 100 && amount_owe < 0){
            std::cout << "You owe " << "R" << abs(amount_owe) ;
        }

    }

}

void lectur_9(){

    int a, b, c, d, e ;
    std::cout << "Enter 5 numbers : " << '\n';
    std::cin >> a >> b >> c >> d >> e;

    int sum = a+b+c+d+e;
    int average = sum/5;

    std::cout << "The average : " << average << '\n' ;
}

void lecture_9_1(){

    // add this numbers and find an average:
    // 8 9 2 3 90 38 299 7 5 8 3 9 58 26 141

    int num ;
    std::cout << "Enter the following numbers: 8 9 2 3 90 38 299 7 5 8 3 9 58 26 141 " << '\n';


    int sum_1 = 0;

    int i = 0;
    while (i <= 15){
        std::cin >> num;
        sum_1 = sum_1 + num;
        int average = sum_1 / 15;
        std::cout << "Average : " << average << '\n';
        i++;

    }

}

void lecture_9_2(){
    // a sentinel program, that when you enter -999 it exit the while loop
    // your program needs to have 5 positive intergers
    // and add all of those positive integers and return their sum

    int  integers;
    std::cout << "Enter your entergers 5 : " << '\n';

    int range = 0;
    int sum_2 = 0;

    while( integers != -999 && range <= 5 ){

            std::cin >> integers;
            sum_2 = sum_2 + integers ;
            int average = sum_2 / 5;

            std::cout << "Your average is : " << average << '\n';
    }
}

void lecture_9_3(){

// program is called telephone
// this is a sentinel control loop, the program MUST convert uppercase letters to their corresponding telephone digits

    char letter;
    std::cout << "Enter a letter : " << '\n';
    std::cin >> letter;

    while( letter != '#'){

        std::cout << "Letter is : " << letter << '\n';
        std::cout << "The digit of  " << letter << " is " ;

        if (letter >= 'A' && letter <= 'Z')
            switch (letter){

            case 'A' :
            case 'B' :
            case 'C' :
                std::cout << 2 << '\n';
                break;

            case 'D' :
            case 'E' :
            case 'F' :
                std::cout << 3 << '\n';
                break;

            case 'G' :
            case 'H' :
            case 'I' :
                std::cout << 4 << '\n';
                break;

            case 'J' :
            case 'K' :
            case 'L' :
                std::cout << 5 << '\n';
                break;

            case 'M' :
            case 'N' :
            case 'O' :
                std::cout << 6 << '\n';
                break;

            case 'P' :
            case 'Q' :
            case 'R' :
                std::cout << 7 << '\n';
                break;

            case 'S' :
            case 'T' :
            case 'U' :
                std::cout << 8 << '\n';
                break;

            case 'V' :
            case 'X' :
            case 'Y' :
            case 'Z' :
                std::cout << 9 << '\n';
                break;
            }

        else
            std::cout << "Invalid letter " << '\n';
            std::cin >> letter;

    }

     char alph;

    while ( alph != '#'){
        std::cout << "Enter Alphabet : " << '\n';
        std::cin >> alph;

        if( alph == 'A' || alph == 'B' || alph == 'C' ){
            std::cout << 2 << '\n';
        }
        else if( alph == 'D' || alph == 'E' || alph == 'F' ){
            std::cout << 3 << '\n';
        }
        else if( alph == 'G' || alph == 'H' || alph == 'I' ){
            std::cout << 4 << '\n';
        }
        else if( alph == 'J' || alph == 'K' || alph == 'L' ){
            std::cout << 5 << '\n';
        }
        else if( alph == 'M' || alph == 'N' || alph == 'O' ){
            std::cout << 6 << '\n';
        }
        else if( alph == 'P' || alph == 'Q' || alph == 'R' ){
            std::cout << 7 << '\n';
        }
        else if( alph == 'S' || alph == 'T' || alph == 'U' ){
            std::cout << 8 << '\n';
        }
        else if( alph == 'V' || alph == 'W' || alph == 'X' || alph == 'Y' || alph == 'Z' ){
            std::cout << 9 << '\n';
        }
        else{
            std::cout << "Invalid";
        }

    }
}

void lecture_9_4(){
 //This loop is used when working with variables  data such as user input,
 //a count controlled loop uses a var called counter var and in each iteration of the loop
 //we must modify the counter  in some way that it reaches a termination condition.

    int counter;
    std::cout << "Enter Counter : " << '\n';
    std::cin >> counter;

    while( counter <= 10){
        std::cout << "first counter : " << counter << '\n';
        counter++;

        std::cout << " Enter a number greater than 10" << '\n' ;
        std::cin >> counter;

    }

}


void lecture_9_5(){
 //a program that reads an indefinite number of no-negative integers from a user and calculates their sum,
 //a negative number (eg. -10 is used as the sentinel to terminate the loop


    int num_3 ;
    int sum_3 = 0;

    std::cout << "Enter your number : " << '\n';
    std::cin >> num_3;

    while( num_3 != -1){
        sum_3 = sum_3 + num_3;
        if (sum_3 > 0){
            std::cout << "The sum of your numbers is : " << sum_3 << '\n';
        }
        else{
            std::cout << "You have entered a negative number " << '\n';
        }
        std::cout << "Enter -1 to end the loop : ";
        std::cin >> num_3;
    }

}


void lecture_10(){

    //a guessing game uses a bool var isGuesed program generate an int >=0 and < 100
    //program promts you to gues num
    //if you guess numcorrectly program outputs appropriate message
    //if gues num < than random num prog output  "Your guess is lower than num. Gues again"
    //otherwise output msg: "your guess is higher than num. Gues num again"
    //program prompts u to gues random num until u enter the correct num

    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;

    isGuessed =false;

    while(!isGuessed){
        std::cout << "Enter a number greater than or equal to 0 and less than 100: " << '\n';
        std::cin >> guess;

        if (guess == num){
            std::cout << "You guessed a correct number " << '\n';
            isGuessed = true;
        }
        else if (guess < num){
            std::cout << "Your gues is less than the number. Guess again " << '\n';
        }
        else{
            std::cout << "your guess is higher than the number " << '\n';
        }

    }

}

void lecture_11(){

     //Write a program that that determines wheter a positive int is divisible by 3 and 9
    //by first finding the sum of its difits then checkin whether the sum is divisible by 3 and 9.

    int num, sum, temp;
    std::cout << "Enter a positive integer : " << '\n';
    std::cin >> num;

    temp = num;
    sum = 0;

    do {
        sum = sum + num % 10;
        num = num / 10;
    }
    while( num > 0);

    std::cout << "The sum of the digits on the integer = " << sum << '\n';

    if ( sum % 3 == 0 )
        std::cout << temp << " Is divisible by 3 " << '\n';

    else
        std::cout << temp << " Is not divisible by 3" << '\n';


    if ( sum % 9 == 0)
        std::cout << temp << " Is divisible by 9" << '\n';

    else
        std::cout << temp << " Is not divisible by 9" << '\n';

}


void lecture_11_1(){

    /*
        Write a program that output the following output.
        >>12345
        >>23456
        >>34567
        >>45678
        >>56789
    */

     for(int i =1; i<=5 ; i++){
            for(int j=i; j < i + 5; j++){
                std::cout << j;
                /*
                    value: j = 1; 1 < 6;
                           j = 2; 2 < 7;
                           j = 3; 3 < 8;
                           j = 4; 4 < 9;
                           j = 5; 5 < 10;
                    output: 12345, 23456, 34567, 45678, 56789
                */
            }

        std::cout <<'\n' ; // This line will print out eat output of the inner loop in a new line excluding the outer loop.
    }
}


void lecture_11_2(){

        // Write a program that output a half star

        for(int i =1; i<=5 ; i++){
            for(int j=1; j <= i ; j++){
                /*
                    value: j = 1; 1 <= 1;
                           j = 1; 1 <= 2;
                           j = 1; 1 <= 3;
                           j = 1; 1 <= 4;
                           j = 1; 1 <= 5;
                    output: 1, 12, 123, 1234, 12345;

                */

                std::cout << "*"; // This line will output the char '*' in the pace of value of j eg: *, **, ***, ****, *****;
            }
            std::cout << '\n' ; // This line will print out the value of j (inner loop) in a new line.
        }

    }

void lecture_11_3(){

        for(int i =1; i<=5 ; i++){
            for (int y = 1; y <= 6-i ; y++) {
                std::cout << " ";  // This line will replace the value of y with a blank space.
                /*
                    vallue: y = 1; 1 <= 5;
                            y = 1; 1 <= 4;
                            y = 1; 1 <= 3;
                            y = 1; 1 <= 2;
                            y = 1; 1 <= 1;
                    output: 1234, 123,12, 1 ;

                            12345
                            1234
                            123
                            12
                            1
                */
            }
            for (int z = 1; z <= i ; z++) {
                /*
                    value: z = 1; 1 <= 1;
                           z = 1; 1 <= 2;
                           z = 1; 1 <= 3;
                           z = 1; 1 <= 4;
                           z = 1; 1 <= 4
                    output: 1, 12, 123, 1234, 12345 ;

                            1
                            12
                            123
                            1234
                            12345

                    THE PROGRAM WILL START WITH VALUE OF THE FIRST INNER LOOP AND THEN THE VALUE OF SECOND INNER LOOP AND IT WILL PRINT THEN IN THE SAME LINE.
                    AND THE FINAL OUTPUT WILL LOOK LIKE:
                                                        12345        1                  123451
                                                        1234         12                 123412
                                                        123    +     123          ===>  123123
                                                        12           1234               121234
                                                        1            12345              112345
                */

                    std::cout << "* "; // This line will replace the value of z with a string="* ".
            }
        std::cout << '\n'; // This line will print out the value of the 2 inner loops in a new line.
    }

}

                                 //Understanding for loops

void basicFor(){

    for(int i=0; i < 6; ++i){
        std::cout << i << "_";
    }
}


void practice_02_04(){


  // Bill for vodacom

    int min_used, min_used_day, min_used_night, account_num;
    char code;

    std::cout << "Enter account number : " << '\n' ;
    std::cin >> account_num;
    std::cout << "Enter service code : " << '\n';
    std::cin >> code;

    if(code == 'r'){
        std::cout << "Enter number of minutes used : " << '\n';
        std::cin >> min_used ;
        std::cout << "You have used " << min_used << " Minutes " << '\n';

        int num_min_used = 50 - min_used;
        double charged_amount = num_min_used*0.20;
        double amount_left = 100 - abs(charged_amount);

        if(min_used < 50){
            std::cout << "Amount left : " << "R100" << '\n';
        }
        else if(min_used > 50 && amount_left > 0 && amount_left < 100){
            std::cout << "Amount left : " << 'R' <<amount_left << '\n';
        }
        else{
            std::cout << "You owe : " << 'R' << abs(amount_left) << '\n';
        }
    }

    else if( code == 'p'){
        std::cout << "Enter number of minutes : " << '\n';
        std::cin >> min_used_day ;
        std::cout << "You have used " << min_used_day << " minutes during the day " << '\n';
        std::cout << "Enter number of minutes usded at night : " << '\n';
        std::cin >> min_used_night ;
        std::cout << "You have used " << min_used_night << " minutes at night " << '\n';

        int num_min_used = 75 - min_used_day, num_min_used_n = 100 - min_used_night;
        double charges_d = abs(num_min_used*0.10), charges_n = abs(num_min_used_n*0.05);
        double amount_left = 120 - (charges_d + charges_n);

        if(min_used_day < 75 && min_used_night < 100){
            std::cout << "Amount left : " << "R100" << '\n';
        }
        else if (min_used_day > 75 && min_used_night > 100 && amount_left>0 && amount_left < 120){
            std::cout << "Amount left : " << amount_left << '\n';
        }
        else{
            std::cout << "You owe : " << 'R' << abs(amount_left);
        }
    }



// Sum of an interger.
 int i = 0;
 int num = 12345;
 int sum = 0;

 while ( i < 5){
        int remain = num % 10;
        sum = sum + remain;
        num = num / 10;
        ++i;
 }
 std::cout << sum;



    // Using while loop to print out full triangle

    int z = 0;
    while( z < 5){
        std::cout << '\n';
        ++z;
        int j = 0;
        int y = 6-i;
        while ( j < 6){
            std::cout << " " ;
            ++j;
        }
        while( y < 6){
            std::cout << y << " ";
            y++;
        }
    }
}

/* *********************************************************************************** PRACTICAL TEST 2025 *****************************************************************************************************************/

void Initials(){

   std::string Names;
   int Age;
   double Weight;

   std::cout << "Enter your Name and Last Name : " << '\n';
   std::getline( std::cin >> std::ws, Names);

   std::cout << "Enter your Age : " << '\n';
   std::cin >> Age;

   std::cout << "Enter your Weight : " << '\n';
   std::cin >> Weight;

   std::cout << "You are " << Names << ", you are " << Age << " years old " << " and you weigh " << Weight << "kg";


}

void score(){

    //Method 1

    int score;
    std::cout << "Enter score : " << '\n';
    std::cin >> score;

    if( score >= 90 && score <= 100){
        std::cout << "Awesome" << '\n' ;
    }
    else if ( score >= 80 && score <= 89){
        std::cout << "Well done" << '\n' ;
    }
    else if ( score >= 79 && score <= 80){
        std::cout << "Average" << '\n' ;
    }
    else if ( score >= 60 && score <= 69){
        std::cout << "Booing" << '\n' ;
    }
    else if ( score >= 0 && score <= 59){
        std::cout << "Very sad" << '\n' ;
    }
    else{
        std::cout << "Invalid input!!" << '\n' ;
    }

    //Method 2

    int score_1;
    std::cout << "Enter score : " << '\n';
    std::cin >> score_1;

    switch(score_1 / 10){
        case 10:
        case 9:
            std::cout << "Awsome";
            break;
        case 8:
            std::cout << "Weldone";
            break;
        case 7:
            std::cout << "Average";
            break;
        case 6:
            std::cout << "Booing";
            break;
        case 4:
        case 3:
        case 2:
        case 1:
            std::cout << "Very sad";
            break;
        default:
            std::cout << "Invalid";


    }

}

void name_age(){
    std::string Name;
    int Age;

    std::cout << "Enter your name : " << '\n';
    std::cin >> Name;

    std::cout << "Enter your Age : " << '\n';
    std::cin >> Age;

    std::cout << "Name : " << Name << '\n';
    std::cout << "Age : " << Age << '\n';

}

void arithmetic(){



    double a = 2.0, b = 3.0, c = 4.1, d = 6.4 , e = 1.1, f =2.3, g = 7.1;
    int h = 6;

    double value_1 = a * b, value_2 = c * d - e, value_3 = f/(g*h) ;
    std::cout << "2.0*3.0 = " << value_1 << '\n';
    std::cout << "4.1*6.4 - 1.1 = " << value_2 << '\n';
    std::cout << "2.3/(7.1*6) = " << value_3 << '\n';
}

void biger_or_smaller_value(){

    int num_1, num_2;
    std::cout << "Enter 2 numbers : " << '\n';
    std::cin >> num_1 >> num_2;

    if ( num_1 > num_2){
        std::cout << "Bigger : " << num_1;
    }
    else{
        std::cout << "Bigger : " << num_2;
    }

}

void wages(){

    double wages, rate, hours, fixed_hours = 40.0;
    std::cin >> rate
             >> hours;

    if(hours > 40.0){
        wages = fixed_hours*rate + 1.5*rate*(hours - fixed_hours);
        std::cout << "Wages : " << wages;
    }
    else{
        wages = hours*rate;
        std::cout << "Wages : " << wages;
    }

}

void range(){

    int number;
    std::cout << "Enter a number between 0 and 7 : " << '\n';
    std::cin >> number;

    switch(number){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            std::cout << number << " Is in range ";
            break;
        default:
            std::cout << number << " Is not in range ";

    }

}


/*******************************************************************************************************************************************************************************************************************************************/


void lecture_12_1(){

    // Write a program that prompts a user to input an integer and then output the number with the digit reversed
    // eg if input is 12345 output should be 54321.
    // you program should must also output 500 as 0005 and 980 as 089

    // string s = to_string(int);

    int integer ;
    std::cout << "Enter an integer : " << '\n';
    std::cin >> integer;
    std::string Integer = std::to_string(integer);

    int i = 0;

    while(i , i < 5){
        ++i;
        std::cout << Integer[5-i] ;
    }

    // Second way
    // reverse(<string_name>.begin(), <string_name>.end()) . Need to add #include <algorithm>

}

// lecture_12_2
// User defined functions

double larger( double x, double y){

    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

double compare_3(double x, double y, double z){
    return larger(x, larger(y,z));
}

void largerst_numbers(){ // This function is the continuation of lecture 12_2

    double a, b, c, d, e;
    std::cout << "Enter Two integers : " << '\n';
    std::cin >> a >> b ;
    std::cout << "Largest : " << larger(a, b) << '\n';

    std::cout << "Enter 3 integers : " << '\n';
    std::cin >> c >> d >> e;
    std::cout << "Largest : " << compare_3(c, d, e) << '\n';

}

//                                              ***PRACTICE***

double greate(double x, double y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

double great_2(double z, double a, double b){

    return greate(z, greate(a,b));

}

int die_roll(int num){

    int die_1;
    int die_2;
    int sum;
    int roll_count = 0;

    srand(time(0));

    do{
    die_1 = rand() % 6 +1;
    die_2 = rand() % 6 +1;
    sum = die_1 + die_2;
    roll_count++;
    }
    while( sum != num);

    return roll_count;

    /*
               ***Paste this on the main function to get your results***
    int num;
    std::cout << "Number of times : " << '\n';
    std::cin >> num;

    std::cout << "Number of times the diec are rolled to get " << num << ": " <<die_roll(num);
    */

}

void loop(){

    int num = 1, counter = 7;

    while(num < 20, num != counter){
        std::cout << num << '\n';
        num++;
    }
}

//                                              END OF PRACTICCE



//                                              ***LECTURE 13***

    /*
    Write a alue return funct that returns only one value even if the return statement contains  more than one expres
    int doCode1();
    int doCode2();
    inr doCode3();
        return 23, y, 3*6
    inr doCode4(int h);
        return 5*k + 1, h + 1;
    */

int doCode1(){

    int x , y ;

    return y , x ;

}

int doCode2(){

    int x = 3, z = 5;

    int sum = x + z;
    int product = x*z;

    return product, sum;

}

int doCode3(){

    int p , y;

    return 23, y, 3*p;
}

int doCode4(int h){

    int k ;
    return 5 * k, k+1, h + 1;

}


string verification(string bloodType){ // Blood type function

    if (bloodType == "O" || bloodType == "A" || bloodType == "B" || bloodType == "AB"){

        return "You are a human\n";
    }

    else{
        return "You are not a human\n";
    }

}

//                                                ***LECTURE 13***

voide palindrome(){
    string str;
    cout << "Enter a palindrome number : ";
    cin >> str;
    int length = str.length();

    for(int i = 0; i < length / 2; ++i){
        if(str[i] != str[length - 1 - i]){
            cout << "It is not a palidrone";
            return false;
        }
        else{
            cout << "It is a palindrome";
            return true;
    }
    }
    
}

int secret(int one){

    int i;
    int prod = 1;

    for(i = 0; i <= 3; i++){
        prod = prod * one;

        return prod;

        /*                ***INPUTE THIS ON THE MAIN FUNCTION TO GET YOUR OUTPUT***

        // What is the output of the following and also what does the function secret() do?
        cout << secret(5) << '\n';
        cout << 2 * secret(6) << '\n';
        
        */
    }
}

int doubleGame(int x){
    
    return x * 2;

}


int main()
{
    for(int i ; i <= 5; i++){
        cout << "Double of " << i << " is " << doubleGame(i);
    }
    return 0;
}


int main(){

   // practice();
   // example_1();
   //output();
   // Roman_numeral();
   //lecture_3();
   //lecture_4();
   //lecture_5();
   //lecture_6();
   //lecture_7();
   //lecture_7_1();
   //gender_1_lecture_7()
   //gender_2_lecture_7()
   //ascending_order_lecture_7();
   //bill_lecture_8();
   //vodacom_bill();
   //lectur_9();
   //lecture_9_1();
   //lecture_9_2();
   //lecture_9_3();
   //lecture_9_4();
   //lecture_9_5();
   //lecture_10();
   //lecture_11();
   //lecture_11_1();
   //lecture_11_2();
   //lecture_11_3();
    //score();
    //name_age();
    //arithmetic();
    //biger_or_smaller_value();
    //void wages();
    //range();
    //lecture_12_1();
    largerst_numbers();


    return 0;
}

/*
Given length in inches, we write a program that determines and outputs the equivalent
length in feet and (remaining) inches. Now there are 12 inches in a foot. Therefore, 100
inches equals 8 feet and 4 inches; similarly, 55 inches equals 4 feet and 7 inches. Note
that 100 / 12 = 8 and 100 % 12 = 4; similarly, 55 / 12 = 4 and 55 % 12 = 7. From these
examples, it follows that we can effectively use the operators / and % to accomplish our
task. The desired program is as follows:
*/


/*Write a program to input a Roman numerals and convert into arabic numerals
 Roman numerals:
 M = 1000
 D = 500
 C = 100
 L = 50
 X = 10
 V = 5
 I = 1 */

// Write a program that tells you the number that you have entered is a positive numbe, if //its a negative number it returns its absolute value.

// Write a program that prompts you to input 3 numbers, the program should then output the //numbers in asceding order

// Bill program for Vodacom, servise code r for regular, p for premium, rate for regular is 20c if you use more than 50 minutes and 10c for premium if you use more than 75 minutes and if //use  more than 100 minutes for the night is 5c. Write a program that output how many minutes you have used and how many are lef.

// write a program that add this numbers and find an average:
// 8 9 2 3 90 38 299 7 5 8 3 9 58 26 141

// a sentinel program, that when you enter -999 it exit the while loop
// your program needs to have 5 positive intergers
// and add all of those positive integers and return their sum

// program is called telephone
// this is a sentinel control loop, the program MUST convert uppercase letters to their //corresponding telephone digits

//a program that reads an indefinite number of no-negative integers from a user and //calculates their sum,
//a negative number (eg. -10 is used as the sentinel to terminate the loop


//a guessing game uses a bool var isGuesed program generate an int >=0 and < 100
    //program promts you to gues num
    //if you guess numcorrectly program outputs appropriate message
    //if gues num < than random num prog output  "Your guess is lower than num. Gues again"
    //otherwise output msg: "your guess is higher than num. Gues num again"
    //program prompts u to gues random num until u enter the correct num


//Write a program that that determines wheter a positive int is divisible by 3 and 9
//by first finding the sum of its difits then checkin whether the sum is divisible by 3 and 9.



/*
        Write a program that output the following output.
        >>12345
        >>23456
        >>34567
        >>45678
        >>56789
*/


// Write a program that output a half star

// Write a program that output a fool star










