cmake_minimum_required(VERSION 3.24)
project(M2OEP_jebair)

set(CMAKE_CXX_STANDARD 14)

add_executable(M2OEP_jebair main.cpp CaesarCipher.cpp CaesarCipher.h Cipher.cpp Cipher.h AtbashCipher.h AtbashCipher.cpp)

add_executable(test testing.cpp CaesarCipher.cpp CaesarCipher.h Cipher.cpp Cipher.h AtbashCipher.h AtbashCipher.cpp)
