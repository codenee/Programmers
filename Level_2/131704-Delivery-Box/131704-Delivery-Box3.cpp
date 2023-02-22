#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    stack<int> save;
    int idx = 0;
    int cur = 1;
    while(idx < order.size()){
        if(order[idx] == cur){
            answer++;
            idx++;
            cur++;
            continue;
        }
        if(!save.empty() && order[idx] == save.top()){
            answer++;
            idx++;
            save.pop();
            continue;
        }
        if(order[idx] < cur){
            break;
        }
        save.push(cur);
        cur++;
    }
    return answer;
}