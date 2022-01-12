// #include <iostream>
// #include <string>
#include <cstring>
#include <cctype>
// #include <algorithm>
using namespace std;

// string encrypt(string str, int key);
// string decrypt(string str, int key);
// string decrypt(string str);
// string stringIn();
// int keyIn();

// string encrypt(string str, int key){
//     for(i = 0; i < str.length(); i++){

//     }
// }
// string decrypt(string str, int key);
// string decrypt(string str);
string stringIn()
{
    string strIn;
    cout << "Input string:" << endl;
    cin >> strIn;
    char *cStrIn = new char[strIn.length() + 1];
    strcpy(cStrIn, strIn.c_str());
    for (int i = 0; i < strIn.length(); i++)
    {
        cStrIn[i] = toupper(cStrIn[i]);
        // cout << cStrIn[i] << endl;
    }
    strIn = cStrIn;
    return strIn;
    // transform(strIn.begin(), strIn.end(), strIn.begin(), ::toupper);
};
// int keyIn();