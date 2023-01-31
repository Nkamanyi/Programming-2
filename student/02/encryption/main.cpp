#include <iostream>
#include <string>

using namespace std;


int main()
{
    // get encryption key

    string key = "";
    string message = "";

    cout << "Enter the encryption key: ";

    getline(cin,key);

    // check length
    if(key.length() < 26)
    {
        cout << "Error! The encryption key must contain 26 characters." << endl;
        return EXIT_FAILURE;
    }

    // check that all are lower case
    for(unsigned int i = 0; i<key.length();i++)
    {
        if(!islower(key.at(i)))
        {
            cout << "Error! The text to be encrypted must contain only lower case characters." << endl;
            return EXIT_FAILURE;
        }
    }

    // get for only alphabelts
    for (char c = 'a'; c < 'z'; ++c)
    {
        if (key.find(c) == string::npos)
        {
            cout << "Error! The encryption key must contain all alphabets a-z." << endl;
            return EXIT_FAILURE;
        }
    }

    // encryption
    cout << "Enter the text to be encrypted: ";
    getline(cin, message);

    // check that all are lower case
    for(unsigned int i = 0; i<message.length();i++)
    {
        if(!islower(message.at(i)))
        {
            cout << "Error! The text to be encrypted must contain only lower case characters." << endl;
            return EXIT_FAILURE;
        }
    }

    string encrypted_message = "";
    for(unsigned int i = 0; i < message.length(); ++i)
    {
        char character = message.at(i);
        unsigned int ascii_value = character;
        unsigned int position = ascii_value - static_cast<unsigned int>('a');
        char encrypted_character = key.at(position);
        encrypted_message += encrypted_character;
    }


    cout << "Encrypted text: " << encrypted_message << endl;

    return EXIT_SUCCESS;
}
