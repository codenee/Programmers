#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<int> st;
    for(const auto& it : s){
        if(it == '('){
            st.push(it);
        }
        else if(!st.empty()){
            st.pop();
        }
        else{
            return false;
        }

    }
    if(!st.empty()){
        return false;
    }

    return answer;
}