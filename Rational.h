#pragma once
#include <sstream> 
#include <string>
using namespace std;

class Rational {
public:
    class Pair {
    private:
        int first;
        int second;

    public:
        void Init(int first, int second);

        void setFirst(int first) { this->first = first; }
        void setSecond(int second) { this->second = second; }

        int getFirst() const { return first; }
        int getSecond() const { return second; }

        void Display() const;
        void Read();
        string toString() const;

        bool operator>(const Pair& other) const {
            return (first > other.first) || (first == other.first && second > other.second);
        }
    };

private:
    Pair fraction;
    int numerator, denominator;

public:
    int getNum() const { return numerator; }
    int getDen() const { return denominator; }
    Pair getPair() const { return fraction; }


    void setPair(Pair fraction) { this->fraction = fraction; }
    void setNum(int numerator) { this->numerator = numerator; }
    void setDen(int denominator) { this->denominator = denominator; }

    void Init(int num, int den, Pair fraction);

    void Display() const;
    void Read();
    string toString() const;

    bool operator>(const Rational& other) const {
        return fraction > other.fraction;
    }

    bool operator<(const Rational& other) const {
        return other.fraction > fraction;
    }

    bool operator==(const Rational& other) const {
        return !(fraction > other.fraction) && !(other.fraction > fraction);
    }

    bool operator!=(const Rational& other) const {
        return !(*this == other);
    }

    bool operator>=(const Rational& other) const {
        return (*this > other) || (*this == other);
    }

    bool operator<=(const Rational& other) const {
        return (*this < other) || (*this == other);
    }
};
