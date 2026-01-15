class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>ns;
        for(int i=0;i<n;i++)
        {
            ns.insert(nums[i]);
        }
        if(n!=ns.size())
        {
            return true;
        }return false;
    }
};