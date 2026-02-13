class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();int maxl=0;  
        for(int i=0;i<n;i++){
        int freq[26]={0};
 
        for(int j=i;j<n;j++)
        {
            freq[s[j]-'a']++;
        
             int distinct=0;
        int value=0;
        bool valid=true;
        for(int k=0;k<26;k++)
        {
            if(freq[k]>0)
            {
            if(value==0)
            {
                value=freq[k];
            }else
            if(freq[k]!=value)
            {
                valid=false;
                break;
            }}  
        }
        if(valid)
        {
            maxl=max(maxl,j-i+1);
        }}}
        return maxl;
    }
};
