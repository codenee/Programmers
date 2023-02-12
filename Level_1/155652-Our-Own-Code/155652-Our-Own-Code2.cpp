#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(auto& c : s){
        for(int k = 0; k < index; k++){
            do{
                c += 1;
                if(c > 'z'){
                    c = 'a';
                }
            }while(skip.find(c) != string::npos);
        }
        answer += c;
    }
    
    return answer;
}