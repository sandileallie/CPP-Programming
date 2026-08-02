#include <iostream>

// Enumaration type is a ordered set of values
// Syntax for enumaration type
//      enum typeName {value1, value2, ... , valueN};
//          Where value1,value2,..., valueN are Identifiers called ENUMERATORS.
//          NOTE: value1,value2,..., valueN are not Variables

enum colors{BROWN, BLUE, RED, GREEN, YELLOW}; //defines a new data type called colors whose values are BROWN,...,YELLOW.
        //cout << colors::BLUE;  will print out the value of BLUE.

//                                  DECLARING VARIABLES
//      enum typeName {value1, value2, ... , valueN};
// Syntax for declaring a variable:     // similar to int <identifier> = 1;
//          typeName <identifier1>, <identifier2>; //Here <identifier1> and <identifier2> are declared to the data type typeName.

    colors myFavColor = BROWN; //here we have just assigned myFavColor the value BROWN.
    //cout << myFavColor; //we can print out the value of myFavColor which is BROWN

//                            OPERATIONS OF ENUMARATIONS
//  To increminent a value from your own data type we use the following syntax:
//          <identifier> = static_cast<typeName>(value1 + 1); // This line will increment the value of value1 by 1
//  myFavColor = static_cast<colors>(BROWN + 1); // You can do this on the main function.

void enumForLoop(){

    for(colors myColor = BROWN; myColor <= YELLOW; myColor = static_cast<colors>(myColor + 1)){
        std::cout << myColor << '\n';
    }

}



int main(){

    myFavColor = static_cast<colors>(BROWN + 1);
    std::cout << myFavColor << '\n';
    enumForLoop();

    return 0;
}
