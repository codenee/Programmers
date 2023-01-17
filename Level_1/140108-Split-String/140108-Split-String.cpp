#include <string>
#include <vector>

using namespace std;
int solution(string s) {
    int answer = 0;
    int index = 0;

    int targetCnt = 0;
    int cnt = 0;
    char target = ' ';
    int len = s.size();
    while( index < len){
        if(target == ' ' || targetCnt == cnt){
            target = s[index];
            answer++;
            targetCnt = 1;
            cnt = 0;
            index++;
            continue;
        }
        if(target == s.at(index)){
            targetCnt++;
        }
        else{
            cnt++;
        }
        index++;
    }
    return answer;
}