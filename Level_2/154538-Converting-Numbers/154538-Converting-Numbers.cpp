#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

void calculate(int num, int y,int n ,set<int>& hash, queue<int>& q){
    if(num + n <= y && hash.count(num + n) == 0){
        hash.insert(num+n);
        q.push(num+n);
    }
    if(num * 2 <= y && hash.count(num * 2) == 0){
        hash.insert(num * 2);
        q.push(num * 2);
    }
    if(num * 3 <= y && hash.count(num * 3) == 0){
        hash.insert(num * 3);
        q.push(num * 3);
    }
    return;
}

int solution(int x, int y, int n) {
    int answer = 0;
    queue<int> q;
    set<int> hash;
    q.push(x);
    while(!q.empty()){
        int len = q.size();
        for(int i = 0; i < len; i++){
            if(q.front() == y){
                return answer;
            }
            int nx = q.front();
            q.pop();
            calculate(nx, y, n, hash, q);
        }
        answer++;
    }
    return -1;
}