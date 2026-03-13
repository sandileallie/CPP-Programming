#include <iostream>
#include <cmath>
#include <algorithm>


// User defined function

 //DATA TYPES,VARIABLES,ARITHMETIC OPERATORS, OPERATOR PRECEDENCE,EXPRESSIONS


    //DATA TYPES AND VARIABLES
    // Integer Data type: Which deals with integers, none decimal parts
    // Floating point data type: Deals with decimal numbers

void integrals(){

    // Integral data type consist of: int,long, bool,unsigned char, unsigned int, unsigned long, unsigned short, unsigned bool
    char x_1 = 20; // integers between -128 to 127, it has 1 byte
    int x_2 = 1253647; // integers between -2147483648 to 2147483647 it has 4 byte
    short x_3 = -32768; // integers betwenn -32768 to 32768 iy has 1 byte
    bool x_4 = true ; // They are called logical values, (true or fals)

    std::cout << x_1 << '\n';
    std::cout << x_2 << '\n';
    std::cout << x_3 << '\n';
    std::cout << x_4 << '\n';
    std::cout << " " << '\n';
/*

    sdt::cout << x_2 << '\n';
    sdt::cout << x_2 << '\n';
    sdt::cout << x_2 << '\n';
*/
}

void floating_point(){

    // Floating point data type consist of: float, double, and long double
    float y_1 = 3.45144; //decimal numbers between -3.4*10^38 to 3.4*10^38
    double  y_2 = 3.4514455; //decimal numbers between -3.4*10^308 to 3.4*10^308

    std::cout << y_1 << '\n';
    std::cout << y_2 << '\n';

}

//ARITHMETIC OPERATORS, OPERATOR PRECEDENCE,EXPRESSIONS

// I'll skip arithmetic operators
// Operation precidence: Use BODMAS rule to do calculations and not use a calculator, eg. long division

void example_mod(){

    //mode(modulus or remainder): Used to get remainder in odinary division (used on Integral data type)
    //num_1 and num_2 are the operands

    int num_1 = 73;
    int num_2 = 9;
    std::cout <<num_1%num_2;
}


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

void find_value_array(){

    char roman_numeral[7] = {'M','D','L','C','X','V','L'};
    int num[7] = {100,500,100,50,10,5,1};
    char found = 'L';

    // auto <idendifier_value_you_want> = find( begin(<name_array>) , end(<name_array>), <name_value_you_want> );
    // find function will iterate trough the array from the beginning till it find the value you are looking for "begin(<name_array>)"
    // but if it does not find the value it will give you the value/address after the end value "end(<name_array>)"

    auto found_address = std::find(std::begin(roman_numeral),std::end(roman_numeral), found); //This line will give you the address of 'found'/ 'found_address is the iterator

    // int <name_index> = <idendifier_value_you_want> - begin(<name_array>);
    // This is pointer arithmetic: subtracting two addresses to find the index

    int index = found_address - std::begin(roman_numeral); //This line will subtract the address of the value we wanted 'found' with the address of the first value

    std::cout << "The value of roman figure " << found << " is :" << num[index];


}


void find_index_string(){

    std::string Roman_numerals = "MDLCXVL";
    int num[7] = {100,500,100,50,10,5,1};
    char Find = 'X';

    size_t FIND = Roman_numerals.find(Find); //This line helps us to find the index of the value we want from our string

    std::cout << "The roman numeral " << Find << " is " << num[FIND] ;


}

void roman_to_num(){

    char roman_numeral[7] = {'M','D','E','C','X','V','L'};
    int num[7] = {1000,500,100,50,10,5,1};
    char found = 'D';

    for(int i=0 ; i<7 ; ++i){
        if(roman_numeral[i]==found){
            std::cout << "The roman numeral " << roman_numeral[i] << " is " << num[i] << '\n';
        }
    }

}

void for_loop(){

    for(int i=0; i<5; i++){
        for(int x=0; x<i; x++){
        std::cout << x << " inner loop " ;
        }
        std::cout << i << " outer loop " << '\n' ;
    }
}







// main function
int main(){

// variables();
// Namespace();
// Typedef();
// presidence();
// Tpye_conversion();
// input();
// hypot();
// statement_if();
// statement_switch();
//while_loop();
//integrals();
//floating_point();
//example_mod();
//find_value_array();
//for_loop();
roman_to_num();





    return 0;
}
