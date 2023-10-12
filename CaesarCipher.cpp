#include "CaesarCipher.h"

//caesar cipher implementation
CaesarCipher::CaesarCipher() {
    for (int i = 'A'; i <= 'Z'; i++)
    {
        if((i + 23) <= 'Z'){
            caesarMap [char(i)] = char(i + 23);
        }
        else{
            caesarMap [char(i)] = char(i - 3);
        }
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if((i + 23) <= 'z'){
            caesarMap [char(i)] = char(i + 23);
        }
        else{
            caesarMap [char(i)] = char(i - 3);
        }
    }
}

//encryption method for caesar cipher
string CaesarCipher::encrypt(string clearText) {
    cipherText = "";
    for(int i = 0; i < clearText.length(); i++){
       if(caesarMap.count(clearText[i]) > 0){
            cipherText += caesarMap[clearText[i]];
       }
       else{
           cipherText += clearText[i];
       }
    }

    return(cipherText);
}
