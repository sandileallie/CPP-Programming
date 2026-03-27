#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
     for(int i =1; i<=5 ; i++){
            for(int j=i; j < i + 5; j++){
                cout << j;
                /*
                    value: j = 1; 1 < 6;
                           j = 2; 2 < 7;
                           j = 3; 3 < 8;
                           j = 4; 4 < 9;
                           j = 5; 5 < 10;
                    output: 12345, 23456, 34567, 45678, 56789;


                */
            }

        cout <<'\n' ;
    }


    return 0;
}
