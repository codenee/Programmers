#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct room {
    int start;
    int end;
    room(int a, int b) : start(a), end(b + 10) {}
    bool operator<(const room& b)const {
        if (start == b.start) {
            return end < b.end;
        }
        return start < b.start;
    }
    bool operator>(const room& b)const {
        if (start == b.start) {
            return end > b.end;
        }
        return start > b.start;
    }
};

const int convertTime(string& time) {
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2)) + 10;
    return hour * 60 + minute;
}

int solution(vector<vector<string>> book_time) {
    int answer = 0;

    priority_queue<room, vector<room>, greater<room> > pq;
    vector<room> rooms;
    for (int i = 0; i < book_time.size(); i++) {
        int hour = convertTime(book_time[i][0]);
        int min = convertTime(book_time[i][1]);
        rooms.push_back(room(hour, min));
    }

    sort(begin(rooms), end(rooms));

    for (const auto& it : rooms) {
        if (!pq.empty() && it.start >= pq.top().end) {
            pq.pop();
        }
        else {
            answer++;
        }
        pq.push(it);
    }

    return  = answer;
}
