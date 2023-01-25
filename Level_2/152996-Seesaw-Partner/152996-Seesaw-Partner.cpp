#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool seesaw(const int& a, const int& b){
    if(a == b){
        return true;
    }
    
    if( a * 4 == b * 3){
        return true;
    }
    if( a * 4 == b * 2){
        return true;
    }
    if( a * 3 == b * 2){
        return true;
    }
    return false;
}

long long solution(vector<int> weights) {
    long long answer = 0;
    sort(weights.begin(), weights.end());
    for(int i = 0; i < weights.size() - 1; i++){
        for(int j = i+1; j < weights.size(); j++){
            if(seesaw(weights[i], weights[j])){
                answer += 1;
            }
        }
    }
    
    return answer;
}