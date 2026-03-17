class Solution {
public:
bool maxi(vector<int>&nums,int k,int m){
    int sum=0;
    int count=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]+sum<=m){
             sum+=nums[i];
        }else{
        sum=nums[i];
        count++;
        }

    }
    if(count<=k){return true;}else
    return false;
}
    int splitArray(vector<int>& nums, int k) {
      int low = *max_element(nums.begin(), nums.end());int ans=0;
        int high=0;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
        while(low<=high){
        int mid=low+(high-low)/2;
        if(maxi(nums,k,mid)){
            ans=mid;
            high=mid-1;
        }else
        low=mid+1;

        }
        return ans;
    }
};