#ifndef UTILITY_H
#define UTILITY_H

#include <algorithm>

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
};

#endif  // UTILITY_H
