#include <string>
#include <vector>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    vector<int> save;
    save.push_back(INT8_MAX);
    
    int index = 0;
    for(int i = 1; i <= order.size(); i++){
        if(order[index] == i){
            index += 1;
        }
        else if(order[index] == save.back()){
            save.pop_back();
            index += 1;
            i -= 1;
        }
        else{
            save.push_back(i);
        }
    }
    
    while(save.size() != 1){
        if(save.back() == order[index]){
            index += 1;
            save.pop_back();
        }
        else{
            break;
        }
    }
    return index;
}