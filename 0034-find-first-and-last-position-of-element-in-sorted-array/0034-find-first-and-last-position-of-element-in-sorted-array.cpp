class Solution {
public:
int firstpos(vector<int>&nums,int target)
{
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            first=mid;
            high=mid-1;
        }else
        if(nums[mid]<target)
        {
           low=mid+1;
        }else
        high=mid-1;
    }
    return first;
}
int lastpos(vector<int>&nums,int target)
{
    int  n=nums.size();
    int last=-1;
    int low=0;int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            last=mid;
            low=mid+1;
        }
        if(nums[mid]>target)
        {
            high=mid-1;
        }else
        low=mid+1;
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
    
      
      {return {firstpos(nums,target),lastpos(nums,target)};
      }}
      
    
};