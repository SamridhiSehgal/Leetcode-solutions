class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss=s.size();
        int ts=t.size();
        vector<int>count(26,0);
        if(ss!=ts){
            return false;
        }
        for(int i=0;i<ss;i++)
        {
            count[s[i]-'a']++;
        }
        for(int i=0;i<ts;i++)
        {
            count[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                return false;
            }
          
        }
        return true;
    }
};