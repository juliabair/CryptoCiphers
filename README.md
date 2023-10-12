# Crypto Ciphers

## Julia Bair

### Summary of Program

This program will take a text file and convert it into either one of two
types of ciphers: caeser or atbash. It takes user input for which type
of cipher or to quit. If the user picks caesar, then it prompts for the
filename. It then takes the .txt file and converts it (caesar moves a
character 3 spaces so A = X, B = Y, and so on). If the user picks atbash
then it converts the file (atbash is the alphabet backwards: A = z, B =
Y, and so on). There are test cases to make sure each cipher works and
that the Cipher files properly read in the file. From module 2 I used
inheritance class relationships and file input/output.

### Any Known Bugs

The only main bug I have is that when putting in the name of the file
when prompted, it is located in a different directory. So, you have to
put ../ before the name of the file. Also specific input validation on
the file name.

### Future Work

In the future I plan to/could add a text to speech ability. In the past
I made a Python project with that ability. After brief research, it is a
bit harder to implement, but I think it could be cool to use it in
tandem with the cipher text translations. I could also add different
types of ciphers.

### Citations

- Chris Savarese and Brian Hart. 1999. Introduction. Retrieved October
  8, 2023 from
  <http://www.cs.trincoll.edu/~crypto/historical/intro.html>

- cplusplus.com. Std::Map::Count. 2023. Retrieved October 8, 2023 from
  <https://cplusplus.com/reference/map/map/count/>

- cplusplus.com. 2023. Retrieved October 8, 2023 from
  <https://cplusplus.com/reference/string/>

- Escualo, et al. 2023. Read whole ASCII file into C++ STD::String.
  Retrieved October 8, 2023 from
  <https://stackoverflow.com/questions/2602013/read-whole-ascii-file-into-c-stdstring/19922123#19922123>

- Ludovic Rembert. 2022. Atbash cipher - detailed guide 2022. (January
  2022). Retrieved October 8, 2023 from
  <https://privacycanada.net/atbash-cipher/>

- RIBdot. 2012. C++ inheritance in separate files using \#include and
  inclusion guards. Retrieved October 8, 2023 from
  <https://stackoverflow.com/questions/11747954/c-inheritance-in-separate-files-using-include-and-inclusion-guards>

- Salvador, et al. 2023. Get the ASCII value for a char, Ord equivalent
  in C++. Retrieved October 8, 2023 from
  <https://stackoverflow.com/questions/4790607/get-the-ascii-value-for-a-char-ord-equivalent-in-c>

- Wikimedia Foundation. Atbash. (September 2023). Retrieved October 8,
  2023 from <https://en.wikipedia.org/wiki/Atbash>

- Wikimedia Foundation. Caesar cipher. (June 2023). Retrieved October 8,
  2023 from <https://en.wikipedia.org/wiki/Caesar_cipher>
