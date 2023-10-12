#include "Cipher.h"

//cipher constructor
Cipher::Cipher() {}

//read in the user input file
string Cipher::readFile(string filename) {
    ifstream inFile;
    inFile.open(filename);

    stringstream stringStream;
    stringStream << inFile.rdbuf();
    string clearText = stringStream.str();

    return clearText;
}