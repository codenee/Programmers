#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> stones, int k) {
    int answer = 1e9;
    
    multiset<int> ms;
    for(int i = 0; i < k - 1; i++){
        ms.insert(stones[i]);
    }
    for(int i = k - 1; i < stones.size(); i++){
        ms.insert(stones[i]);
        auto it = ms.end();
        --it;
        answer = min(answer, *it);
        ms.erase(ms.find(stones[i-(k-1)]));
    }
    
    return answer;
}