#include "AtbashCipher.h"

//atbash cipher implementation
AtbashCipher::AtbashCipher() {
    for (int i = 'A'; i <= 'Z'; i++) {
        int difference = 'A' - i;
        atbashMap[char(i)] = ('Z' + difference);
    }

    for (int i = 'a'; i <= 'z'; i++) {
        int difference = 'a' - i;
        atbashMap[char(i)] = ('z' + difference);
    }
}

//encryption method for atbash cipher
string AtbashCipher::encrypt(string clearText) {
    cipherText = "";

    for(int i = 0; i < clearText.length(); i++){
        if(atbashMap.count(clearText[i]) > 0){
            cipherText += atbashMap[clearText[i]];
        }
        else{
            cipherText += clearText[i];
        }
    }

    return(cipherText);
}
