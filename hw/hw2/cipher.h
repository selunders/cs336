// Functions for caesar cipher encryption

#include <cstring>
using namespace std;

// Get string to work with
string stringIn()
{
    string strIn;
    cout << "Input string: ";
    // Get entire input including whitespace
    getline(cin >> ws, strIn);
    // Convert string to char array
    char *cStrIn = new char[strIn.length() + 1];
    strcpy(cStrIn, strIn.c_str());
    // Loop through array, capitalizing lowercase letters
    for (int i = 0; i < strIn.length(); i++)
    {
        cStrIn[i] = toupper(cStrIn[i]);
    }
    // Convert char array back to string
    strIn = cStrIn;
    return strIn;
};

// Get key to encrypt/decrypt
int keyIn()
{
    int key;
    cout << "Key: ";
    cin >> key;
    return key;
};

// Encrypt string
string encrypt(string strIn, int key)
{
    // Convert string to char array
    char *cStrIn = new char[strIn.length() + 1];
    strcpy(cStrIn, strIn.c_str());
    // Loop through array, shifting each character by the key
    for (int i = 0; i < strIn.length(); i++)
    {
        if (cStrIn[i] < 91 && cStrIn[i] > 64)
        {
            // The modulus allows looping from Z back to A
            cStrIn[i] = char(65 + ((cStrIn[i] - 65 + key) % 26));
        }
    }
    // Convert char arry back to string
    strIn = cStrIn;
    return strIn;
};

string decrypt(string strIn, int key)
{
    /* Decrypting in this case is really the same process as encrypting but with
    the inverse key, so we can just reuse the encryption function */
    int decryptKey = 26 - key;
    return encrypt(strIn, decryptKey);
};