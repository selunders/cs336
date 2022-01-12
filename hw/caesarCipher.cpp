// Seth Lunders
// Professor Song
// CS 336
// Assignment 2 | Caesar Cipher
// 9 Sep 2021

// Notes

//

#include <iostream>
// #include <string>
#include "cipher.h"

using namespace std;

int main()
{
    //////////////////////
    // Variables
    string input;
    string output;
    int key;
    int mode = 0;

    //////////////////////
    // Menu
    cout << "-- CaesarCipher --" << endl;
    cout << "1. Encrypt String" << endl;
    cout << "2. Decrypt String (With Key)" << endl;
    cout << "3. Decrypt String (Brute Force)" << endl;
    cout << "4. Quit Program" << endl;

    // Check for valid option
    while (!(mode == 1 || mode == 2 || mode == 3 || mode == 4))
    {
        cout << "What would you like to do? ";
        cin >> mode;
    }

    // Function
    switch (mode)
    {
    case 1:
        input = stringIn();
        cout << input << endl;
        // key = keyIn();
        // output = encrypt(input, key);
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;

    default:
        break;
    }
}