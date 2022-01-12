// Seth Lunders
// Professor Song
// CS 336
// Assignment 2 | Caesar Cipher
// 9 Sep 2021

// Notes

//

#include <iostream>
#include <string>
#include "cipher.h"

using namespace std;

int main()
{
    //////////////////////
    // Variables
    string input;
    string output;
    int key;

    cout << "-- CaesarCipher --" << endl;
    do
    {
        int mode = 0;

        //////////////////////
        // Menu
        cout << "1. Encrypt String" << endl;
        cout << "2. Decrypt String (With Key)" << endl;
        cout << "3. Decrypt String (Brute Force)" << endl;
        cout << "4. Quit Program" << endl
             << endl;

        // Check for valid input
        while (!(mode == 1 || mode == 2 || mode == 3 || mode == 4))
        {
            cout << "What would you like to do? ";
            cin >> mode;
        }

        // Encrypting
        switch (mode)
        {
        case 1:
            input = stringIn();
            key = keyIn();
            cout << "Encrypting: \"" << input << "\" with key: " << key << endl;
            output = encrypt(input, key);
            cout << "Output: " << output << endl;
            break;
        case 2:
            input = stringIn();
            key = keyIn();
            cout << "Decrypting: \"" << input << "\" with key: " << key << endl;
            output = decrypt(input, key);
            cout << "Output: " << output << endl;
            /* code */
            break;
        case 3:
            input = stringIn();
            cout << "Brute force decrypting: \"" << input << "\"" << endl
                 << endl;
            for (int i = 1; i < 26; i++)
            {
                output = decrypt(input, i);
                cout << "Key = " << i << ": " << output << endl;
            }
            break;
        case 4:
            return 0;
            break;

        default:
            break;
        }
        cout << endl;
        mode = 0;
    } while (true);
}