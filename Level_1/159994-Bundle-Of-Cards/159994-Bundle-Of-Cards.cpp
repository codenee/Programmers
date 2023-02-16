#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    auto iter1 = cards1.begin();
    auto iter2 = cards2.begin();
    
    for(int i = 0; i < goal.size(); i++){
        if(goal[i] == *iter1){
            ++iter1;
        }
        else if(goal[i] == *iter2){
            ++iter2;
        }
        else{
            return "No";
        }
    }    
    return answer;
}