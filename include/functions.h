#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include "mathvector.h"

//variable value input function
template <typename T>
T myCin() noexcept
{
    bool good = true;

    T variable;

    do
    {
        std::cout << "Enter the value of the variable: ";
        std::cin >> variable;

        good = std::cin.good();

        if (!good)
        {
            std::cout << "You entered something wrong\n";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (!good);

    return variable;
}

//addition of two vectors
MathVector add(const MathVector& vec1, const MathVector& vec2) noexcept;

//subtraction of two vectors
MathVector substruct(const MathVector& vec1, const MathVector& vec2) noexcept;

//multiplication of a vector by a scalar
MathVector scale(const MathVector& vec, const float VALUE) noexcept;

//finding the length of a vector
float length(const MathVector& vec) noexcept;

//vector normalization
MathVector normalize(const MathVector& vec) noexcept;

//ñreate math vector
MathVector createMathVector() noexcept;


#endif // FUNCTION_H
