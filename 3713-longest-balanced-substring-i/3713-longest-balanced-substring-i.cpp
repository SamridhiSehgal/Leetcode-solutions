class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int maxLen = 0;

        for(int i = 0; i < n; i++) {

            unordered_map<char, int> mp;
            int distinct = 0;
            int maxFreq = 0;

            for(int j = i; j < n; j++) {

                if(mp[s[j]] == 0)
                    distinct++;

                mp[s[j]]++;
                maxFreq = max(maxFreq, mp[s[j]]);

                int len = j - i + 1;

                if(len == distinct * maxFreq)
                    maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};
