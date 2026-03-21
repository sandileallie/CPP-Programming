#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>



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
    cout << "Enter 5 numbers : " << '\n';
    cin >> a >> b >> c >> d >> e;

    int sum = a+b+c+d+e;
    int average = sum/5;

    cout << "The average : " << average << endl;



    // add this numbers and find an average:
    // 8 9 2 3 90 38 299 7 5 8 3 9 58 26 141

    int num ;
    cout << "Enter the following numbers: 8 9 2 3 90 38 299 7 5 8 3 9 58 26 141 " << '\n';


    int sum = 0;

    int i = 0;
    while (i <= 15){
        cin >> num;
        sum = sum + num;
        int average = sum / 15;
        cout << "Average : " << average << '\n';
        i++;

    }


    // a sentinel program, that when you enter -999 it exit the while loop
    // your program needs to have 5 positive intergers
    // and add all of those positive integers and return their sum

    int  integers;
    cout << "Enter your entergers 5 : " << '\n';

    int range = 0;
    int sum = 0;

    while( integers != -999 && range <= 5 ){

            cin >> integers;
            sum = sum + integers ;
            int average = sum / 5;

            cout << "Your average is : " << average << '\n';
    }


// program is called telephone
// this is a sentinel control loop, the program MUST convert uppercase letters to their corresponding telephone digits

    char letter;
    cout << "Enter a letter : " << '\n';
    cin >> letter;

    while( letter != '#'){

        cout << "Letter is : " << letter << '\n';
        cout << "The digit of  " << letter << " is " ;

        if (letter >= 'A' && letter <= 'Z')
            switch (letter){

            case 'A' :
            case 'B' :
            case 'C' :
                cout << 2 << '\n';
                break;

            case 'D' :
            case 'E' :
            case 'F' :
                cout << 3 << '\n';
                break;

            case 'G' :
            case 'H' :
            case 'I' :
                cout << 4 << '\n';
                break;

            case 'J' :
            case 'K' :
            case 'L' :
                cout << 5 << '\n';
                break;

            case 'M' :
            case 'N' :
            case 'O' :
                cout << 6 << '\n';
                break;

            case 'P' :
            case 'Q' :
            case 'R' :
                cout << 7 << '\n';
                break;

            case 'S' :
            case 'T' :
            case 'U' :
                cout << 8 << '\n';
                break;

            case 'V' :
            case 'X' :
            case 'Y' :
            case 'Z' :
                cout << 9 << '\n';
                break;
            }

        else
            cout << "Invalid letter " << '\n';
            cin >> letter;

    }


 //This loop is used when working with variables  data such as user input,
 //a count controlled loop uses a var called counter var and in each iteration of the loop
 //we must modify the counter  in some way that it reaches a termination condition.

    int counter;
    cout << "Enter Counter : " << '\n';
    cin >> counter;

    while( counter <= 10){
        cout << "first counter : " << counter << '\n';
        counter++;

        cout << " Enter a number greater than 10" << '\n' ;
        cin >> counter;

    }


 //a program that reads an indefinite number of no-negative integers from a user and calculates their sum,
 //a negative number (eg. -10 is used as the sentinel to terminate the loop


    int num ;
    int sum = 0;

    cout << "Enter your number : " << '\n';
    cin >> num;

    while( num != -1){
        sum = sum + num;
        if (sum > 0){
            cout << "The sum of your numbers is : " << sum << '\n';
        }
        else{
            cout << "You have entered a negative number " << '\n';
        }
        cout << "Enter -1 to end the loop : ";
        cin >> num;
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
        cout << "Enter a number greater than or equal to 0 and less than 100: " << '\n';
        cin >> guess;

        if (guess == num){
            cout << "You guessed a correct number " << '\n';
            isGuessed = true;
        }
        else if (guess < num){
            cout << "Your gues is less than the number. Guess again " << '\n';
        }
        else{
            cout << "your guess is higher than the number " << '\n';
        }

    }

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
   vodacom_bill();
    return 0;
}











