class MyCalendar {
public:
vector<pair<int,int>>cal;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto it:cal){
            int s=it.first;
            int e=it.second;

            if(startTime<e && endTime>s)return false;
        }cal.push_back({startTime, endTime});return true;
    }
};

/**
 * Yourr MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */