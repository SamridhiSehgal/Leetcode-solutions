class Solution {
public:
    int binaryGap(int n) {
        int last=-1;
        int pos=0;
        int dist=0;
        while(n>0)
        {
            if(n&1)
            {
                if(last != -1) {
                    dist = max(dist, pos - last);
                }
                last = pos;
            }
            n = n >> 1;
            pos++;
        }
        
        return dist;
    }
};