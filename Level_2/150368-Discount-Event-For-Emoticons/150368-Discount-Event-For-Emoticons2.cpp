#include <string>
#include <vector>

using namespace std;

vector<int> answer(2, 0);
int salesRates[8];

void dfs(int pos, const vector<vector<int>>& users, const vector<int>& emoticons){
    
    if(pos == emoticons.size()){
        int total_price = 0, total_user = 0;
        for(const auto& it : users){
            int tmp = 0;
            for(int j = 0; j < emoticons.size(); j++){
                if(salesRates[j] >= it[0]){
                    tmp += emoticons[j] * (100 - salesRates[j]) / 100;
                }
            }
            if(tmp >= it[1]){
                total_user++;
            }
            else{
                total_price += tmp;
            }
        }
        answer  = max(answer , {total_user, total_price});
        return;
    }
    for(int i = 1; i <= 4; i++){
        salesRates[pos] = i * 10;
        dfs(pos + 1, users, emoticons);
    }
}

vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
    dfs(0, users, emoticons);   
    return answer;
}