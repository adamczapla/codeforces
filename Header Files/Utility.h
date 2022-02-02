#ifndef UTILITY_H
#define UTILITY_H

#include <algorithm>
#include <string>
#include <iostream>

class Utility {

public:

    template<typename T>
    inline static T gcd(T a, T b)
    {
        T gcd = 1;
        for (T i = 2; i <= std::min(a, b); ++i) {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
        return gcd;
    }

    template<typename T>
    inline static bool isPrime(T p)
    {
        if (p == 0 || p == 1) return false;
        for (T i = 2; i <= p / 2; ++i) {
            if (p % i == 0) return false;
        }
        return true;
    }

    template<typename T>
    inline static T toDigit(std::string s)
    {
        T digit = 0;
        for (auto i : s)
            digit = digit * 10 + i - '0';
        return digit;
    }

    template<typename T>
    inline static std::string toBin(T d)
    {
        std::string bin;
        for (T i = sizeof(d) * 8 - 1; i >= 0; --i) {
            bool b = d & (1LL << i);
            bin += std::to_string(b);
        }
        return bin;
    }

};

#endif  // UTILITY_H
