#include <cmath>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;

        double val = log2(n);         // log base 2
        return fabs(val - round(val)) < 1e-10  // is integer
               && ((int)round(val) % 2 == 0); // is even
    }
};
