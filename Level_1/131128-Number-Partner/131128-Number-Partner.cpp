#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char, int> hashx, hashy;
    for(const auto& it : X){
        hashx[it] += 1;
    }
    for(const auto& it : Y){
        hashy[it] += 1;
    }
    
    char ch[11] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for(int i = 9; i >= 0; i--){
        if(hashx[ch[i]] > 0 && hashy[ch[i]] > 0){
            int n = hashx[ch[i]] < hashy[ch[i]] ? hashx[ch[i]] : hashy[ch[i]];
            for(int j = 0; j < n; j++){
                answer += ch[i];
            }
        }
    }
    
    if(answer == ""){
        return "-1";
    }
    if(answer[0] == '0'){
        return "0";
    }
    return answer;
}