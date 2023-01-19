#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    unordered_map<char, int> mx, my;
    
    /*
    for(char i = '0'; i <='9'; i++){
        mx.insert(make_pair(i, 0));
        my.insert(make_pair(i, 0));
    }
    */
    
    for(const auto& it : X){
        mx[it] += 1;
    }
    for(const auto& it : Y){
        my[it] += 1;
    }
    for(char c = '9'; c >= '0'; c--){
        int m = min(mx[c], my[c]);
        for(int j = 0; j < m; j++){
            answer += c;
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