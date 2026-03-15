class Solution {
public:
int sumdiv(vector<int>&nums,int threshold,int div){
    int d=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
      d = (nums[i] + div - 1) / div;
        sum+=d;
    }return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       int n = nums.size();
       int ans=0;
int low = 1;
int high = *max_element(nums.begin(), nums.end());
while(low<=high){
    int mid=low+(high-low)/2;
    if(sumdiv(nums,threshold,mid)<=threshold){
        ans=mid;
       high = mid - 1;
    }else{
    low=mid+1;}
}
return ans;
    }
};