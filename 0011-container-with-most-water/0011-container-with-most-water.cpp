class Solution {
public:
    int maxArea(vector<int>& height) {
  int n=height.size();
   int left=0;
   int right=n-1;
   int maxr=0;
   while(left<right)
   {
        int area=0;
        int h=min(height[left],height[right]);
        int ans=(right-left)*h;
        maxr=max(maxr,ans);
        if (height[left] < height[right])
                left++;
            else
                right--;
        }
   return maxr;
    }
};