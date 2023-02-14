#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    sort(begin(book_time), end(book_time));
    for(int i = 0; i < book_time.size(); i++){
        string strStart = book_time[i][0];
        string strEnd = book_time[i][1];
        int nStart = stoi(strStart.substr(0, 2)) * 60 + stoi(strStart.substr(3));
        int nEnd = stoi(strEnd.substr(0, 2)) * 60 + stoi(strEnd.substr(3)) + 10;
        while(!pq.empty() && pq.top() <= nStart){
            pq.pop();
        }
        pq.push(nEnd);
        answer = max(answer, (int)pq.size());
    }
    
    return answer;
}