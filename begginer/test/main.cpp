#include <iostream>

using namespace std;

int main()
{
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

    return 0;
}
