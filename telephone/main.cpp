// George Strauch
// gives the corresponding character to a digit
// as if you were texting someone with a flip phone
// 03/13/2018

/*
 * while charInput is not '#',
 * keep asking for an uppercase
 * letter to make a number
 * */


#include <iostream>
using namespace std;

int main() {
    char chInput = '0';

    cout << "enter an uppercase letter" << endl;
    cin >>chInput;

     while(chInput != '#'){
         switch (chInput){
             case 'A':
             case 'B':
             case 'C':
                cout << 0 << endl;
                 break;
             case 'D':
             case 'E':
             case 'F':
                 cout << 2 << endl;
                 break;
             case 'G':
             case 'H':
             case 'I':
                 cout << 3 << endl;
                 break;
             case 'J':
             case 'K':
             case 'L':
                 cout << 4 << endl;
                 break;
             case 'M':
             case 'N':
             case 'O':
                 cout << 5 << endl;
                 break;
             case 'P':
             case 'Q':
             case 'R':
                 cout << 6 << endl;
                 break;
             case 'S':
             case 'T':
             case 'U':
                 cout << 7 << endl;
                 break;
             case 'V':
             case 'W':
             case 'X':
                 cout << 8 << endl;
                 break;
             case 'Y':
             case 'z':
                 cout << 9 << endl;
                 break;
             default:
                 cerr << "error, check input";
                 break;
         }

         cout << "enter a new char ['#' to quit]" << endl;
         cin >> chInput;

     } // end while loop

    return 0;

}