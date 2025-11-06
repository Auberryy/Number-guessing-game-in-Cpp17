#include "pch.h"
#include "getRandomNumber.h"
#include <iostream>


int main()
{
    int num = getRandomNumber();
    bool finished = false;

    while (finished == false) {
        std::cout << "guess the number (1-100): ";
        int input;
        std::cin >> input;

        if (input < num) { std::cout << "This number is too little" << std::endl; }
        if (input > num) { std::cout << "This number is too big" << std::endl; }
        if (input == num) { std::cout << "you've guessed correct!" << std::endl; finished = true; }

    }
    
    return 0;
}
