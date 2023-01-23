#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0, height = 0;
    for(const auto &it : sizes){
        int lt = it[0] < it[1] ? it[0] : it[1];
        int ut = it[1] >= it[0] ? it[1] : it[0];
        
        width = lt > width ? lt : width;
        height = ut > height ? ut : height;
        
    }
    return width * height;
}