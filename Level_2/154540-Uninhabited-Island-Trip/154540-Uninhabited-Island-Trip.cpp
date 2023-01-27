#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool check[101][101];

int bfs(int x, int y, vector<string>& maps){
    if(x < 0 || x >= maps.size() || y < 0 || y >= maps[0].size() || check[x][y] || maps[x][y] == 'X'){
        return 0;     
    }
    check[x][y] = true;
    return (maps[x][y] - '0') + bfs(x-1, y, maps) + bfs(x+1, y, maps) + bfs(x, y-1, maps) + bfs(x, y+1, maps);
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    for(int i = 0; i < maps.size(); i++){
        int sum = 0;
        for(int j = 0; j < maps[i].size(); j++){
            sum = bfs(i, j, maps);
            if(sum > 0){
                answer.push_back(sum);
            }
        }
    }
    sort(answer.begin(), answer.end());
    if(answer.empty()){
        return {-1};
    }
    return answer;
}