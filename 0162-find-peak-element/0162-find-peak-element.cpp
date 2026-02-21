class Solution {
public:
    int findPeakElement(vector<int>& nums) {        
        int n=nums.size();
        int low=0;
        int high=n-1;int ans=0;
        class Solution {
public:
    int findPeakElement(vector<int>& nums) {        
        int n=nums.size();
        int low=0;
        int high=n-1;int ans=0;
        while(low<high)
        {
            int mid=low+(high-low)/2;
         
            
            if(nums[mid+1]<nums[mid])
            {
             high=mid;
            }
            else
            low=mid+1;
        }
        return low;
    }
};
        while(low<high)
        {
            int mid=low+(high-low)/2;
         
            
            if(nums[mid+1]<nums[mid])
            {
             high=mid;
            }
            else
            low=mid+1;
        }
        return low;
    }
};