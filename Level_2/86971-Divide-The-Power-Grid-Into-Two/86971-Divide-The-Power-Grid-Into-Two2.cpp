#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> m[200];

int bfs(int togo, int now, int cnt){
    
    for(int i = 0; i < m[now].size(); i++){
        if(m[now][i] != togo){
            cnt = bfs(now, m[now][i] , cnt + 1);
        }
    }
    
    return cnt;
}

int solution(int n, vector<vector<int>> wires) {
    
    for(const auto& it : wires){
        m[it[0]].push_back(it[1]);
        m[it[1]].push_back(it[0]);
    }
      int answer = INT8_MAX;
    for(const auto& it : wires){
        int sum = bfs(it[0], it[1], 1);
        int comp = n - (sum * 2);
        answer = min(answer, abs(comp));
    }
    
  
    return answer;
}