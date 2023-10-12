#ifndef M2OEP_JEBAIR_CIPHER_H
#define M2OEP_JEBAIR_CIPHER_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Cipher {

public:
    //declare constructor
    Cipher();

    //declare readFile
    string readFile(string filename);
};

#endif //M2OEP_JEBAIR_CIPHER_H
