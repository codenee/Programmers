#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int len = prices.size();
    for(int i = 0; i < len; i++){
        int time = 0;
        for(int j = i + 1; j < len; j++){
            time++;
            if(prices[j] < prices[i] || j == len - 1){
                answer.push_back(time);
                break;
            }
        }
    }
    answer.push_back(0);
    return answer;
}