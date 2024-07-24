#include <iostream>
#include "MyString.h"

int main() {
    // The main.cpp code is copied from the video lecture.
    // Don't have idea to implement all the functions by myself.
    // The code of other file is written by myself.
    // Ofc some code might be same or most of the same as the lecture,
    // because I have learn for the lecture and got the same code ideas.


    MyString a{ "frank" };
    MyString b{ "frank" };
    std::cout << (a == b) << std::endl;         // true
    std::cout << (a != b) << std::endl;           // false

    b = "george";
    std::cout << (a == b) << std::endl;         // false
    std::cout << (a != b) << std::endl;          // true
    std::cout << (a < b) << std::endl;         // true
    std::cout << (a > b) << std::endl;          // false

    MyString s1{ "FRANK" };
    s1 = -s1;
    std::cout << s1 << std::endl;             // frank              

    s1 = s1 + "*****";
    std::cout << s1 << std::endl;             // frank*****       

    s1 += "-----";                      // frank*****-----
    std::cout << s1 << std::endl;

    MyString s2{ "12345" };
    s1 = s2 * 3;
    std::cout << s1 << std::endl;           // 123451234512345

    MyString s3{ "abcdef" };
    s3 *= 5;
    std::cout << s3 << std::endl;             // abcdefabcdefabcdefabcdefabcdef

    MyString repeat_string;
    int repeat_times;
    std::cout << "Enter a string to repeat: " << std::endl;
    std::cin >> repeat_string;
    std::cout << "How many times would you like it repeated? " << std::endl;
    std::cin >> repeat_times;
    repeat_string *= repeat_times;
    std::cout << "The resulting string is: " << repeat_string << std::endl;

    repeat_string = "RepeatMe";
    std::cout << (repeat_string + repeat_string + repeat_string) << std::endl;

    repeat_string += (repeat_string * 3);
    std::cout << repeat_string << std::endl;

    repeat_string = "RepeatMe";
    repeat_string += (repeat_string + repeat_string + repeat_string);


    return 0;
}