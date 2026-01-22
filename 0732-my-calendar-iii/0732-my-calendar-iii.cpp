class MyCalendarThree {
public:
    vector<pair<int,int>> timeline;

    int book(int start, int end) {

        timeline.push_back({start, 1});   // meeting starts
        timeline.push_back({end, -1});    // meeting ends

        sort(timeline.begin(), timeline.end());

        int ongoing = 0;
        int answer = 0;

        for (auto p : timeline) {
            ongoing += p.second;
            answer = max(answer, ongoing);
        }

        return answer;
    }
};
