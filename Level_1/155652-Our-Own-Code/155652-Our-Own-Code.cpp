#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(auto &it : s){
        int pos = 0;
        int nCh = it - 'a';
        while(pos < index){
            nCh++;
            it = (nCh % 26) + 'a';
            if(skip.find(it) == string::npos){
                pos++;
            }
        }
        answer += it;
    }
    return answer;
}