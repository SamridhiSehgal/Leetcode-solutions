#include <climits>
class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans = 1;

        while (ans <= n && ans <= INT_MAX / 3) {
            if (ans == n)
                return true;
            ans = ans * 3;
        }

        return ans == n;
    }
};
