#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<bool>> visit;

void bfs(int x, int y, vector<int>& answer, const vector<string>& maps){
    queue<pair<int ,int>> q;
    q.push(make_pair(x, y));
    visit[x][y] = true;
    vector<int> dist{1, 0, -1, 0, 1};
    int sum = maps[x][y] - '0';
    while(!q.empty()){
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = xx + dist[i];
            int ny = yy + dist[i+1];
            if(nx < 0 || nx >= maps.size() || ny < 0 || ny >= maps[0].size() || visit[nx][ny] || maps[nx][ny] == 'X'){
                continue;
            }

                visit[nx][ny] = true;
                q.push(make_pair(nx, ny));
                sum += maps[nx][ny] - '0';

        }
    }
    answer.push_back(sum);
}

vector<int> solution(vector<string> maps) {
    visit.resize(maps.size(), vector<bool>(maps[0].size()));
    vector<int> answer;
    for(int i = 0; i < maps.size(); i++){
        for(int j = 0; j < maps[i].size(); j++){
            if(maps[i][j] != 'X' && !visit[i][j]){
                bfs(i, j, answer, maps);
            }
        }
    }
    
    if(answer.empty()){
        return {-1};
    }
    sort(answer.begin(), answer.end());
    return answer;
}