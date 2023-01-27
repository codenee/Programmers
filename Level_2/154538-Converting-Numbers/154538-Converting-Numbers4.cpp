#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {

    queue<pair<int, int>> q;
    q.push(make_pair(y, 0));
    
    while(!q.empty()){
        int val = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(val == x){
            return cnt;
        }
        if(val % 2 == 0){
            q.push(make_pair(val / 2 , cnt + 1));
        }
        if(val % 3 == 0){
            q.push(make_pair(val / 3, cnt + 1));
        }
        if(val - n > 0){
            q.push(make_pair(val - n, cnt + 1));
        }
    }
    
    return -1;
}