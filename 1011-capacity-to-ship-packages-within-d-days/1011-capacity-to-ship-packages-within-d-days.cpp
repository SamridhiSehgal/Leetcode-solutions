class Solution {
public:
bool required(vector<int>weights,int days,int cap){
    int load=0;int day=1;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i]>cap){
            day=day+1;
            load=weights[i];
        }else{
        load+=weights[i];
    }}
    if(day>days){
        return false;
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(), weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
        }
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(required(weights,days,mid)){
                ans=mid;
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

        
    }
};