class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        int n = s.size();
        if (n != t.size()) return false;

        int j = 0;  // character index
        int i = 1;  // move counter
        vector<int> used(26, 0); // track how many times each shift has been used

        while (j < n) {
            if (s[j] != t[j]) {
                int moves = (t[j] - s[j] + 26) % 26;
                if (moves != 0) {
                    // calculate the next allowed move for this shift
                    int required = moves + used[moves] * 26;

                    // if the required move exceeds k, cannot convert
                    if (required > k) return false;

                    used[moves]++; // mark this shift as used
                }

                s[j] = t[j]; // convert the character
            }

            j++; // move to next character
        }

        return true;
    }
};
