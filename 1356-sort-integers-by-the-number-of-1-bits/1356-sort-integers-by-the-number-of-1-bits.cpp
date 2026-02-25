#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    // Count number of 1 bits using your logic (& and >>)
    static int countBits(int n) {
        int count = 0;
        while(n > 0) {
            count += (n & 1);   // check last bit
            n = n >> 1;         // shift right
        }
        return count;
    }

    // Comparator function
    static bool compare(int a, int b) {
        int countA = countBits(a);
        int countB = countBits(b);

        if(countA == countB)
            return a < b;

        return countA < countB;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};