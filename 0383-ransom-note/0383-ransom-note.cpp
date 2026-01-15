class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r=ransomNote.size();
        int m=magazine.size();
        int count[26]={0};
        for(int i =0;i<r;i++)
        {
            count[ransomNote[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            count[magazine[i]-'a']--;}
            for(int j=0;j<26;j++)
            {
                if(count[j]>0)
                return false;
                
            }
        return true;}};
