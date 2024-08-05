// FoodOrNotFood.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EvenEater.h"

using namespace std;

int main() {
    EvenEater eater;
    int num;

    while (true) {
        cout << "Enter a number: ";
        cin >> num;

        try {
            string result = eater.eat(num);
            cout << result << endl;
        }
        catch (const EvenEater::OddFoodException& e) {
            cout << e.nums() << endl;
        }
    }
}



