#include <string>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0, n = 0, idx = 0;
    int dart[3] = {0,};
    string str("");
    for(int i = 0; i < dartResult.size(); i++){
        char c = dartResult[i];
        if(c >= '0' && c <= '9'){
            str += c;
        }
        else if( c == 'S' || c == 'D' || c == 'T'){
            int n = stoi(str);
            if( c== 'S'){
                dart[idx++] = pow(n, 1);
            }
            else if(c == 'D'){
                dart[idx++] = pow(n, 2);
            }
            else{
                dart[idx++] = pow(n, 3);
            }
            str = "";
        }
        else{
            if(c == '*'){
                dart[idx-1] *= 2;
                if(idx - 2 >= 0){
                    dart[idx-2] *= 2;
                }
            }
            else{
                dart[idx-1] *= (-1);
            }
        }
    }
    answer = dart[0] + dart[1] + dart[2];
    return answer;
}