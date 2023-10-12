#ifndef M2OEP_JEBAIR_CAESARCIPHER_H
#define M2OEP_JEBAIR_CAESARCIPHER_H
#include <string>
#include <iostream>
#include "Cipher.h"
#include <map>

using namespace std;

class CaesarCipher: public Cipher{
private:
    //declares string clearText, string cypherText, and map caesarMap
    string clearText;
    string cipherText;
    map<char, char> caesarMap;

public:
    CaesarCipher();
    //declares public encrypt method
    string encrypt(string clearText);
};

#endif //M2OEP_JEBAIR_CAESARCIPHER_H
