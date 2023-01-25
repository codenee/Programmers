#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int storey) {
    int answer = 0;
    
    int help = 0;
    string str = to_string(storey);
    for(int i = str.size() - 1; i >= 0; i--){
        
        int num = str[i] - '0' + help;
        help = 0;
        if(num > 5){
            answer += (10 - num);
            help = 1;
        }
        else if(num == 5 && i > 0){
            if(str[i-1] -'0' >= 5){
                answer += num;
                help = 1;
            }
            else{
                answer += num;
            }
        }
        else{
            answer += num;
        }
        
    }
    
    if(help > 0){
        answer += help;
    }
    return answer;
}