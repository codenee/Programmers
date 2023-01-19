#include <string>
#include <vector>

using namespace std;

bool check[14] = {0,};
int answer = 0;

void dfs(vector<int>& number, int L, int s){
    if( L == 3){
        int sum = 0;
        for(int i = 0; i < number.size(); i++){
            if(check[i]){
                sum += number[i];
            }
        }
        if(sum == 0){
            answer++;
        }
    }
    else{
        for(int i = s; i < number.size(); i++){
            check[i] = true;
            dfs(number, L + 1, i + 1);
            check[i] = false;
        }
    }
}

int solution(vector<int> number) {
    dfs(number, 0, 0);
    return answer;
}