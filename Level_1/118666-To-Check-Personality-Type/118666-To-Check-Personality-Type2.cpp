#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    
    char mbti[4][2] = {
        {'R', 'T'},
        {'C', 'F'},
        {'J', 'M'},
        {'A', 'N'}
    };
    
    string answer = "";
    map<char, int> mk;
    for(int i = 0; i < survey.size(); ++i){
        if(choices[i] < 4){
            mk[survey[i][0]] += (4 - choices[i]);
        }
        else{
            mk[survey[i][1]] += (choices[i] - 4);
        }
    }
    
    for(int i = 0; i < 4; i++){
        if(mk[mbti[i][0]] >= mk[mbti[i][1]]){
            answer += mbti[i][0];
        }
        else{
            answer += mbti[i][1];
        }
    }
    
    return answer;
}