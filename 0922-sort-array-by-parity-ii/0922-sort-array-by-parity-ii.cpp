class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n=arr.size();
       int i=0;
       int j=1;
       while(i<n&&j<n)
       {
        if(arr[i]%2==0)
        {
            i=i+2;
        }
        else if(arr[j]%2==1)
        {
            j=j+2;
        }
        else
        {
            swap(arr[i],arr[j]);
            i=i+2;
            j=j+2;
        }}
        return arr;
       }
};