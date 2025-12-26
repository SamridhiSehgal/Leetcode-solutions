class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        unordered_map<char, long long> mp;
        long long total = 0;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] += cost[i];
            total += cost[i];
        }

        long long ans = LLONG_MAX;
        for (auto &it : mp) {
            ans = min(ans, total - it.second);
        }

        return ans;
    }
};
