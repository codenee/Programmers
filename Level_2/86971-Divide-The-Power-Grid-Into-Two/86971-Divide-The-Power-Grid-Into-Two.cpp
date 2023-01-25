#include <string>
#include <vector>
#include <functional>
#include <climits>

using namespace std;

int solution(int n, vector<vector<int>> wires) {
    
    vector<vector<int>> graph(n+1);
    for(const auto& it : wires){
        graph[it[0]].push_back(it[1]);
        graph[it[1]].push_back(it[0]);
    }
    
    int answer = INT8_MAX;
    vector<int> siz(n+1);
    function<void(int, int)> dfs = [&](int cur, int prev) -> void{
        siz[cur] = 1;
        for(int nxt : graph[cur]){
            if(nxt == prev){
                continue;
            }
            dfs(nxt, cur);
            siz[cur] += siz[nxt];
        }
    };
    
    dfs(1, -1);
    for(int i = 1; i <= n; i++){
        for(int j : graph[i]){
            int L = siz[j];
            int R = n - siz[j];
            answer = min(answer, abs(L - R));
        }
    }
    
    return answer;
}