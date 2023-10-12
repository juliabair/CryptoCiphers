#include "CaesarCipher.h"
#include "AtbashCipher.h"
#include <iostream>

using namespace std;

int main() {
    //makes atbash and caesar objects
    CaesarCipher c;
    AtbashCipher a;

    //declare variables
    string option;
    string fileName;
    string clearText;
    string cipherText;

        //user options and input loop
        while (true)
        {
            cout << "Enter option; 1 = Caesar Cipher, 2 = Atbash Cipher, 3 = Quit: ";
            cin >> option;

            if (option == "3")
            {
                break;
            }

            if (option != "1" && option != "2"){
                cout << "Not an input" << endl;
                continue;
            }

            while (true)
            {
                cout << "Enter file name: " ;
                cin >> fileName;
                break;
            }

            if (option == "1") {
                clearText = c.readFile(fileName);
                cipherText = c.encrypt(clearText);
                cout << "clearText: " << clearText << endl;
                cout << "cipherText: " << cipherText << endl;
                continue;
            }

            if (option == "2") {
                clearText = a.readFile(fileName);
                cipherText = a.encrypt(clearText);
                cout << "clearText: " << clearText << endl;
                cout << "cipherText: " << cipherText << endl;
                continue;
            }
        }

        return(0);
}