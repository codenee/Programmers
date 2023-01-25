#include <string>
#include <vector>

using namespace std;

int maxSales = 0, maxEmoticonPlus = 0;

void calculate(const vector<int>& salesRates, const vector<vector<int>>& users, const vector<int>& emoticons){
    
    int emoticonPlus = 0, sales = 0;
    for(const auto& it : users){
        int tmp = 0;
        for(int i = 0; i < salesRates.size(); i++){
            if( it[0] > salesRates[i]){
                continue;
            }
            tmp += (emoticons[i] / 100) * (100 - salesRates[i]);
        }
        if(tmp >= it[1]){
            emoticonPlus++;
        }
        else{
            sales += tmp;
        }
    }
    
    if(maxEmoticonPlus > emoticonPlus){
        return;
    }
    if(maxEmoticonPlus == emoticonPlus && maxSales >= sales){
        return;
    }
    maxEmoticonPlus = emoticonPlus;
    maxSales = sales;

}

void dfs(vector<int>& salesRates, vector<vector<int>>& users, vector<int>& emoticons){
    if(salesRates.size() == emoticons.size()){
        calculate(salesRates, users, emoticons);
        return;
    }
    for(int i = 10; i <= 40; i += 10){
        salesRates.push_back(i);
        dfs(salesRates, users, emoticons);
        salesRates.pop_back();
    }
}

vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {

    vector<int> salesRates;
    dfs(salesRates, users, emoticons);
    
    vector<int> answer;
    answer.push_back(maxEmoticonPlus);
    answer.push_back(maxSales);
    return answer;
}