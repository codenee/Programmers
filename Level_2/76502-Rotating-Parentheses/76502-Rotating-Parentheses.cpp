#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

inline bool check(const string& s){
    stack<char> st;
    for(const auto& it : s){
        if( it == '(' | it == '[' || it == '{'){
            st.push(it);
        }
        else if(st.empty()){
            return false;
        }
        else{
            switch(it){
                case ')' :{
                    if(st.top() == '('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                    break;
                }
                case ']':{
                    if(st.top() == '['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                    break;
                }
                case '}':{
                    if(st.top() == '{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                    break;
                }
            }
        }
    }
    return st.empty();
}

int solution(string s) {
    int answer = 0;
    for(int i = 0; i < s.size(); ++i){
        if(check(s)){
            ++answer;
        }
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    return answer;
}