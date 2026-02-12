#include <iostream>
#include <cmath>


// User defined function

void variables(){
 /* Two steps of creating a variable
        1.Declaration
        2.Assignment
    */

    // Declaration
    int x;
    int y;
    // Assignment
    x = 5;
    y = 3;

    int sum = x + y;

    std::cout << "x :" << x << '\n';
    std::cout << "y :" << y << '\n';
    std::cout << "The sum of x and y: " << sum << '\n';

    // Types of data types.

    int integer = 10;
    double decimal = 10.53;
    char charector = '$';
    bool boolean = true; // 'true/false'
    std::string String = "Allie";

    // Making a variable a constant using the key word 'const', your variable name must be in capitals.
    // Example: Calculating a circumference of a circle.

    const double PI = 3.14159; // This is our constant variable, we wont be able to change it in the futer.
    double radius = 15;
    double circumference = 2 * PI * radius;

    std::cout << "circumference is :" << circumference << '\n';
    std::cout << "" << '\n';

}

namespace first{
    int x = 2005;
}

namespace second{
    int x = 2006;
}

void Namespace(){

    /*
    Namespace = provides a solution for preventing name conflicts in  large projects. Each entity needs a unique name.
                namespace allows for identically named entities as long as the namespace are different.
    */

    std::cout << "This is my first namespace :" << first::x << '\n'; // we prefix the namespace, '::' is the scope resolution operator
    std::cout << "This is my second namespace  :" << second::x << '\n';
    std::cout << "" << '\n';

}

// typedef and using key words

typedef std::string text_t;
typedef int number_t;
          // OR
using text_u = std::string;
using number_u = int;

void Typedef(){
    /*
    typedef = is a reserved keyword used to create an additional name (alias) for another data type.
              New identifier for an existing type helps with readability and reduces typos. 
              Use when ther is a clear benefit
              Replace with 'using' (work better with templates)
    */

    text_t name = "Sandile";
    number_t age = 23;
    std::cout << "My name is " << name << " and i am " << age << '\n';

    text_u Name = "Allie";
    number_u Age = 23;
    std::cout << "My name is " << Name << " and i am " << Age << '\n';

    std::cout << "" << '\n';

}

void presidence(){
    //parenthesis first
    //multiplication and division second
    //addition and subtraction last

    int compute_1 = 6 - 5 + 4 * 3 / 2;
    int compute_2 = 6 - (5 + 4) * 3 / 2;

    std::cout << "Compute 6 - 5 + 4 * 3 / 2 : " << compute_1 << '\n';
    std::cout << "Compute 6 - (5 + 4) * 3 / 2 : " << compute_2 << '\n';


    std::cout << "" << '\n';

}

// Type conversion

void Tpye_conversion(){

    // Type conversion = convert a value of one data type to another.
    //                  Implicity = automatic
    //                  Explicit = Precide value with new data type
    
    double x = 3.5421;

    int y = 5.365;

    x = (int) x ;  // Explicit

    std::cout << y << '\n';
    std::cout << x << '\n';

    // Exaple in real world problem

    int correct = 8;
    int total_questions = 10;

    double score = (double) correct / (double) total_questions * 100;

    std::cout << "Score : " << score << (char) '%' << '\n';

    std::cout << '\n';

}


// accepting some user input in c++

void input(){
    
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "What is your full name: " << '\n';
    std::getline(std::cin >> std::ws, name); // THis is a function used to input a string with spaces in between.

    std::cout << "How old are you: " << '\n';
    std::cin >> age;

    std::cout << "hello " << name << '\n';
    std::cout << "what is your age ?" << '\n';
    std::cout << "I am " << age << '\n';

    std::cout << '\n';


}


/*
    Some usefull math fuctions
    first you need to include cmath

        variable = std::max(value_1, value_2)
        variable = std::min(value_1, value_2)
        variable = pow(value_1, value_2)
        variable = sqrt(value)
        variable = abs(value)
        variable = round(value)
        variable = ceil(value)
        variable = floor(value)
*/

// calculating an hypoteneuse of right angled triangle

void hypot(){

    double opposite;
    double adjescent;
    double hypotineues;


    std::cout << "Enter your opposite side : " << '\n';
    std::cin >> opposite;

    std::cout << "Enter your adjescent side: " << '\n';
    std::cin >> adjescent;

    hypotineues = sqrt( pow(opposite,2)  + pow(adjescent,2) );

    std::cout << "Your hypotineues is : " << hypotineues << '\n';



}

void statement_if(){

    double mark;

    std::cout << "Enter your mark : ";
    std::cin >> mark;

    if ( mark <= 49){
        std::cout << "fail : " << mark ;
    }

    else if ( mark <=74){
        std::cout << "Pass : " << mark ;
    }

    else if ( mark <=100){
        std::cout << "Distintion : " << mark ;
    }

    else{
        std::cout << "You have no marks" << '\n';
    }

}


 void statement_switch(){
    int month;
    
    std::cout << "Enter the month(1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
        std::cout << "It is January";
        break;

        case 2:
        std::cout << "It is Feb";
        break;

        case 3:
        std::cout << "It is March";
        break;

        case 4:
        std::cout << "It is April";
        break;

        case 5:
        std::cout << "It is May";
        break;

        case 6:
        std::cout << "It is June";
        break;

        case 7:
        std::cout << "It is July";
        break;

        case 8:
        std::cout << "It is August";
        break;

        case 9:
        std::cout << "It is September";
        break;

        case 10:
        std::cout << "It is October";
        break;

        case 11:
        std::cout << "It is November";
        break;

        case 12:
        std::cout << "It is December";
        break;
    }

 }

void while_loop(){

    int i= 0;
    while( i < 5){
        std::cout << "This is :" << i << "\n";
        i++;
    }

}










// main function
int main(){

// variables();
//  Namespace();
//  Typedef();
//  presidence();
//  Tpye_conversion();
//   input();
//   hypot();
 //  statement_if();
//statement_switch();
while_loop();



    return 0;
}