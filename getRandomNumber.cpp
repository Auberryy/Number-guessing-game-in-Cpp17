#include "pch.h"
#include "getRandomNumber.h"
#include <random>

int getRandomNumber()
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dist(1, 100);

    return dist(gen);
}
