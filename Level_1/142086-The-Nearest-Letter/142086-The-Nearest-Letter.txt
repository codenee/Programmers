#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    vector<int> vec(26, -1);
    for(int i = 0; i < s.size(); i++){
        if(vec[s[i] - 97] == -1){
            answer.push_back(-1);
            vec[s[i] - 97] = i;
        }
        else{
            answer.push_back( i - vec[s[i] - 97] );
            vec[s[i] - 97] = i;
        }
    }
    
    return answer;
}