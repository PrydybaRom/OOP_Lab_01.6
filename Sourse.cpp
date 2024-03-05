#define _CRT_SECURE_NO_WARNINGS
#include "Rational.h"
using namespace std;
#include <iostream>

int main() {
    Rational::Pair p1;
    Rational::Pair p2;
    p1.Init(20, 3);
    p2.Init(10, 5);

    Rational r1;
    r1.Read();
    r1.Display();

    if (p1 > p2) {
        cout << "p1 > p2" << endl;
    }
    else
        cout << "p1 is not > p2" << endl;

    cout << "Rational " << r1.toString();
    cout << "Pair " << p1.toString();

    return 0;
}
