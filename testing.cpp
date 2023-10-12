#include "CaesarCipher.h"
#include "AtbashCipher.h"
#include "Cipher.h"
#include <ctime>
#include <iostream>
using namespace std;

//declared booleans for each test
bool testCaesarCipher();
bool testAtbashCipher();
bool testCipher();

//success cases
int main() {
    srand(time(NULL));
    if (testCaesarCipher()) {
        cout << "Passed all Caesar Cipher test cases" << endl;
    }
    if (testAtbashCipher()) {
        cout << "Passed all Atbash Cipher test cases" << endl;
    }
    if (testCipher()) {
        cout << "Passed all Cipher test cases" << endl;
    }
    return 0;
}

//caesar test cases looking for failure
bool testCaesarCipher() {
    bool passed = true;

    CaesarCipher c;
    string result = c.encrypt("abc");
    if (result != "xyz") {
        passed = false;
        cout << "FAILED encrypt test case: " << result << endl;
    }
    string result1 = c.encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz");
    if (result1 != "XYZABCDEFGHIJKLMNOPQRSTUVW xyzabcdefghijklmnopqrstuvw") {
        passed = false;
        cout << "FAILED encrypt test case: " << result1 << endl;
    }
    return passed;
}


//atbash test cases looking for failure
bool testAtbashCipher() {
    bool passed = true;
    AtbashCipher a;
    if (a.encrypt("abc") != "zyx") {
        passed = false;
        cout << "FAILED encrypt test case" << endl;
    }
    if (a.encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz") != "ZYXWVUTSRQPONMLKJIHGFEDCBA zyxwvutsrqponmlkjihgfedcba") {
        passed = false;
        cout << "FAILED encrypt test case" << endl;
    }
    return passed;
}

//cipher file test cases looking for failure
bool testCipher() {
    bool passed = true;
    Cipher c;
    string result = c.readFile("../cypherClearText.txt");
    if (result != "The Quick Brown Fox Jumped Over The Lazy Dog."){
        passed = false;
        cout << "FAILED readFile test case: " << result  << endl;
    }
    return passed;
}
