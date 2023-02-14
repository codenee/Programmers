#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> stones, int k) {
        	            // {value, index}
    priority_queue<pair<int, int>> pq;
    int i;
    for(i = 0; i < k; i++){
        pq.push({stones[i], i});
    }
    
    int answer = pq.top().first;
    
    while(i < stones.size()){
        pq.push({stones[i], i});
        i++;
        while(pq.top().second < i - k){ 	//구간 확인
            pq.pop();   		//필요 없는 구간 , O(NlogN)
        }
        answer = min(answer, pq.top().first);
    }
    
    return answer;
}