class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if (s.size() != t.size()) return false;

        vector<int> count(26, 0);  // how many times each shift is needed

        for (int j = 0; j < s.size(); j++) {
            if (s[j] != t[j]) {
                int shift = (t[j] - s[j] + 26) % 26;
                if (shift == 0) continue;

                count[shift]++;
                int moves_needed = shift + (count[shift]-1)*26;

                if (moves_needed > k) return false;
            }
        }

        return true;
    }
};
