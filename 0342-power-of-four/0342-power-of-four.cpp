#include <climits>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false; // negative or zero can't be power of 4

        int ans = 1;
        while(ans <= n){
            if(ans == n) return true;

            if(ans <= INT_MAX / 4)  // safe multiplication
                ans *= 4;
            else
                break;  // stop to prevent overflow
        }

        return false;  // never matched
    }
};
