#include <string>
#include <vector>
#include <queue>

using namespace std;

int dist[6] = { 1, 0, -1, 0, 1 };
int board[2][101][101];
queue<pair<int, int>> Q;
int w, h;

void bfs(int idx, vector<string>& maps) {
    while (!Q.empty()) {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dist[i];
            int ny = y + dist[i + 1];
            if (nx >= 0 && nx < h && ny >= 0 && ny < w && board[idx][nx][ny] == 0) {
                if (maps[nx][ny] != 'X') {
                    board[idx][nx][ny] = board[idx][x][y] + 1;
                    Q.push({ nx, ny });
                }
            }
        }
    }
}

int solution(vector<string> maps) {

    h = maps.size();
    w = maps[0].size();

    int x = 0, y = 0;
    int j;
    for (int i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if (maps[i][j] == 'S') {
                board[0][i][j] = 1;
                Q.push({ i, j });
                bfs(0, maps);
                break;
            }
        }
        if (j < w) {
            break;
        }
    }

    for (int i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if (maps[i][j] == 'E') {
                board[1][i][j] = 1;
                Q.push({ i, j });
                bfs(1, maps);
                break;
            }
        }
        if (j < w) {
            break;
        }
    }
    
     for (int i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if (maps[i][j] == 'L') {               
                x = i, y = j;
                break;
            }
        }
        if (j < w) {
            break;
        }
    }

    if(board[0][x][y] == 0 || board[1][x][y] == 0){
        return -1;
    }
    int answer = board[0][x][y] + board[1][x][y] - 2;
    
    return answer;
}