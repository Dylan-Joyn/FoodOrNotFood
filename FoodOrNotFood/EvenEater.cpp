#include "EvenEater.h"

const char* EvenEater::OddFoodException::nums() const noexcept {
    return "Cannot eat odd numbers!";
}

string EvenEater::eat(int num) {
    if (num % 2 == 0) {
        return "Yum!";
    }
    else {
        throw OddFoodException();
    }
}




