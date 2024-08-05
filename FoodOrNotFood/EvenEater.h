#ifndef EVEN_EATER_H
#define EVEN_EATER_H
#pragma once

#include <exception>
#include <string>

using namespace std;

class EvenEater {
public:
    class OddFoodException : public exception {
    public:
        const char* nums() const noexcept;
    };

    string eat(int num);
};

#endif

