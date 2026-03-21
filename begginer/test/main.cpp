#include <iostream>

using namespace std;

int main()
{
    char alpha;
    cout << "Enter alphabet from A-Z : " << '\n';
    cin >> alpha;

    while( alpha != '#'){


        if (alpha >= 'A' && alpha <= 'Z'){
            switch(alpha){

            case 'A':
            case 'B':
            case 'C':
                cout << 2 << '\n';
                break;

            case 'D':
            case 'E':
            case 'F':
                cout << 3 << '\n';
                break;

            case 'G':
            case 'H':
            case 'I':
                cout << 4 << '\n';
                break;

            case 'J':
            case 'K':
            case 'L':
                cout << 5 << '\n';
                break;

            case 'M':
            case 'N':
            case 'O':
                cout << 6 << '\n';
                break;

            case 'P':
            case 'Q':
            case 'R':
                cout << 7 << '\n';
                break;

            case 'S':
            case 'T':
            case 'U':
                cout << 8 << '\n';
                break;

            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                cout << 9 << '\n';
                break;

            }

        }

        else{
            cout << "Invalid output";
            }

        cout << "Enter '#' to exit the loop ";
        cin >> alpha;
    }

    return 0;
}
