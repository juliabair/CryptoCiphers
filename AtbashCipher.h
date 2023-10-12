#ifndef M2OEP_JEBAIR_ATBASHCIPHER_H
#define M2OEP_JEBAIR_ATBASHCIPHER_H
#include <string>
#include <iostream>
#include "Cipher.h"
#include <map>

using namespace std;

class AtbashCipher: public Cipher{
private:
    //declares string clearText, string cypherText, and map atbashMap
    string clearText;
    string cipherText;
    map<char, char> atbashMap;

public:
    AtbashCipher();
    //declares public encrypt method
    string encrypt(string clearText);
};

#endif //M2OEP_JEBAIR_ATBASHCIPHER_H
