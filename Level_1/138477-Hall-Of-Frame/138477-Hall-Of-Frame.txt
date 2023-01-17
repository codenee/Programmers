#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0; i < score.size(); i++){
        if(pq.size() < k){
            pq.push(score[i]);
            answer.push_back(pq.top());
        }
        else{
            int nk = pq.top();
            if( nk <= score[i]){
                 pq.push(score[i]);
                 pq.pop();
                 nk = pq.top();    
            }
            answer.push_back(nk);
        }
    }
    
    return answer;
}