#include <string>
#include <regex>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int nScore[3] = {0,}, nCnt = 0;
    regex e("(([0-9]+)(S|D|T)(\\*|#)*)");
    
    sregex_iterator it(dartResult.begin(), dartResult.end(), e);
    sregex_iterator end;
    
    while(it != end){
        smatch sm = *it;
        nScore[nCnt] = stoi(sm.str(2));
        if(sm.str(3) == "S"){
            nScore[nCnt] = nScore[nCnt];
        }
        else if(sm.str(3) == "D"){
            nScore[nCnt] = nScore[nCnt] * nScore[nCnt];
        }
        else if(sm.str(3) == "T"){
            nScore[nCnt] = nScore[nCnt] * nScore[nCnt] * nScore[nCnt];
        } 
        
        if(sm.str(4) == "*"){
            if(nCnt == 0){
                nScore[nCnt] *= 2;
            }
            else{
                nScore[nCnt-1] *= 2;
                nScore[nCnt] *= 2;
            }
        }
        if(sm.str(4) == "#"){
            nScore[nCnt] *= (-1);
        }
        nCnt++;
        ++it;
    }
    answer = nScore[0] + nScore[1] + nScore[2];
    return answer;
}