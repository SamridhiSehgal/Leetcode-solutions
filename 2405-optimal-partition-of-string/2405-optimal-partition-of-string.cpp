class Solution {
public:
    int partitionString(string s) {
        int count=1;
        unordered_set<char>mp;
        for(int i=0;i<s.length();i++)
        {
            
        if(mp.find(s[i])!=mp.end()){
count++;
mp.clear();
            
            }

            mp.insert(s[i]);
        }
    return count;}
};