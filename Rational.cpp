#include "Rational.h"
#include <iostream>
using namespace std;

// лерндх дкъ PAIR
void Rational::Pair::Init(int first, int second)
{
    setFirst(first);
    setSecond(second);
}

void Rational::Pair::Display() const {
    cout << "Pair: " << "First = " << first << " Second = " << second << endl;
}

void Rational::Pair::Read() {
    int first, second;
    cout << "First = "; cin >> first;
    cout << "Second = "; cin >> second;
    Init(first, second);
}

string Rational::Pair::toString() const
{
    stringstream sout;
    sout << " First = " << first << " Second = " << second << endl;

    return sout.str();
}


// лерндх дкъ RATIONAL
void Rational::Init(int num, int den, Pair fraction) {
    setNum(num);
    setDen(den);
    setPair(fraction);
}

void Rational::Display() const {
    fraction.Display();
    cout << "Ratinal: Numerator - " << numerator << " Denumerator - " << denominator << endl;
}

void Rational::Read() {
    int numerator, denominator;
    Pair p;
    cout << "Rational: " << endl;
    cout << "Enter Numerator: "; cin >> numerator;
    cout << "Enter Denominator: "; cin >> denominator;
    cout << "Pair - ? " << endl;
    p.Read();
    Init(numerator, denominator, p);
}

string Rational::toString() const {
    stringstream sout;
    sout << " Numerator = " << numerator << " Second = " << denominator << endl;
    return sout.str();
}