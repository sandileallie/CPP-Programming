#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

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

    cout << "Enter 4 intergers : " << '\n';

    cin >> A
        >> B
        >> C
        >> D;

    cout << "The numbers you have entered are : A= " << A << " B= " << B << " C = " << C << " D= " << D;


    //second sample output: 23 235.59 22 98
    // cin.clear();
    // cin.ignore()
    // getline(cin , Mystring)



    // the following program finds the absolute valeu of an integer

    int number, temp;

    cout << "Enter intergers : " << '\n';

    cin >> number;
    temp = number;

    if (temp > 0){
        cout << "The interger " << temp << " is a positive number" << 'ln';
    }

    else if (temp < 0){
        int abs_number =  abs(temp);
        cout << "The absolute value of " << temp << " is " << abs_number ;
    }

}

void lecture_6(){

    //Calculating extra time Wages

   double hours, rate, wages ;

   cout << "Enter your hours: " << '\n';
   cout << fixed << showpoint << setprecision (2);
   cin >> hours
       >> rate;

   if (hours > 40){
    wages = 40.0 * rate + 1.5* rate * (hours - 40.0);
    cout << "Your wages including extra hours for this month is : " << wages << '\n';
   }

   else{
    wages = hours * rate;
    cout << "Your wages for this month is R: " << wages ;
   }


    //Calculating Tstudent grades

    double grade;
    cout << "Enter grade : " << '\n';
    cin >> grade ;

    if ( grade > 90){
        cout << "Your grade is a A : " << grade << '\n';
    }
    else if ( grade > 80){
        cout << "Your grade is a B  : " << grade << '\n';
    }

     else if ( grade > 70){
        cout << "Your grade is a C : " << grade << '\n';
    }

     else if ( grade > 60){
        cout << "Your grade is a D : " << grade << '\n';
    }

     else if ( grade < 50){
        cout << "Your grade is a F : " << grade << '\n';
    }


   //Comparing Two numbers and output the largest

    int num_1 , num_2;
    cout << "Enter num_1 and num_2 : " << '\n';
    cin >> num_1
        >> num_2;

     cout << "The Two numbers you have entered are " << num_1 << " and " << num_2 << '\n';

    if ( num_1 > num_2 ){
        cout << "The largest number is  " << num_1  << '\n';
    }

    else if ( num_1 < num_2 ){
        cout << "The largest number is " << num_2  << '\n';
    }


}

void lecture_7(){

    int num;
    cout << "Enter a nuber from 0 to 10 : ";
    cin >> num;

    switch(num){
case 0 :
    cout << "The number " << num  << " is in range";
    break;

case 2 :
    cout << "The number " << num  << " is in range";
    break;

case 3 :
    cout << "The number " << num  << " is in range";
    break;

case 4 :
    cout << "The number " << num  << " is in range";
    break;

case 5 :
    cout << "The number " << num  << " is in range";
    break;

case 6 :
    cout << "The number " << num  << " is in range";
    break;

case 7 :
    cout << "The number " << num  << " is in range";
    break;

case 8 :
    cout << "The number " << num  << " is in range";
    break;

case 9 :
    cout << "The number " << num  << " is in range";
    break;

case 10 :
    cout << "The number " << num  << " is in range";
    break;

default:
    cout << "The number you have entered " << num << " is not in range";

    }


void lecture_7_1(){

    int score;
    cout << "Enter a score : ";
    cin >> score ;
    char grade;

    switch(score / 10){

case 0:
case 1:
case 2:
case 3:

case 4 :
    grade = 'F';
    cout << "grade : " << grade ;
    break;

case 5 :
    grade = 'E';
    cout << "grade : " << grade ;
    break;

case 6 :
    grade = 'D';
    cout << "grade : " << grade ;
    break;

case 7 :
    grade = 'C';
    cout << "grade : " << grade ;
    break;

case 8 :
    grade = 'B';
    cout << "grade : " << grade ;
    break;

case 9 :
    grade = 'A';
    cout << "grade : " << grade ;
    break;

case 10 :
    grade = 'A';
    cout << "grade : " << grade ;
    break;


default:
    cout << "The score you have entered is invalid ";
    }

}

void gender_1_lecture_7(){


    // Write c++ statement that output Male if the gender is 'M', Female if the genger is 'F', and invalid gender otherwise

    char gender;
    cout << "Enter your gender: M if you are Male and F if you are a Female " << '\n';
    cin >> gender;

    if (gender == 'M'){
        cout << "Male";
    }

    else if (gender == 'F'){
        cout << "Female";
    }

    else {
        cout << "invalid gender";
    }


}

void gender_2_lecture_7(){

    char gender;
    cout << "Enter your gender: M if you are Male and F if you are a Female " << '\n';
    cin >> gender;

    switch(gender){
    case 'M':
        cout << "Male";
        break;
    case 'F':
        cout << "Female";
        break;
    default:
        cout << "invalid gender";

    }


}

void ascending_order_lecture_7(){

    // Write a program that prompts you to input 3 numbers, the program should then output the numbers in asceding order

    int num1, num2, num3;
    cout << "Enter 3 numbers :";
    cin >> num1
        >> num2
        >> num3;

    if( num1 > num2 && num2 > num3){
        cout << num3 << " " << num2 << " " << num1;
    }

    else if ( num1 < num2 && num2 < num3){
        cout << num1 << " " << num2 << " " << num3;
    }

    else if ( num1 < num2 && num2 > num3){
        cout << num3 << " " << num1 << " " << num2;
    }

    else if ( num1 > num2 && num2 < num3){
        cout << num1 << " " << num2 << " " << num3;
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
   lecture_7();
   gender_1_lecture_7()
   gender_2_lecture_7()
   ascending_order_lecture_7()
    return 0;
}



















