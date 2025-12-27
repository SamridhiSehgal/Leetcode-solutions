class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();int ans=0;
        for(int i=0;i<n;i++)
        {
            int count=0;;
            int no=nums[i];
            while(no>0)
            {
                int d=no%10;
                count=count+1;
                no=no/10;
            }
            if(count%2==0)
            {
                ans=ans+1;
            }
        }
       return ans; 
    }
};