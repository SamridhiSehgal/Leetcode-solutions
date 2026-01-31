class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
      int n =arr.size();
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++)
      {
        int need=target-arr[i];
             if(mp.find(need) != mp.end()) {
                return {mp[need],i};
      }else
      mp[arr[i]]=i;
      }
      return {};    
}};