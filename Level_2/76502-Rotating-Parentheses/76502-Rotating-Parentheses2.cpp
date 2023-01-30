#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.size(); i++){
        stack<char> st;
        bool flag = false;
        for(int j = 0; j < s.size(); ++j){
            if(s[j] == ']' && st.top() == '['){
                st.pop();
            }
            else if(s[j] == '}' && st.top() == '{'){
                st.pop();
            }
            else if(s[j] == ')' && st.top() == '('){
                st.pop();
            }
            else{
                flag = true;
                st.push(s[j]);
            }
        }
        if(st.empty() && flag){
            answer++;
        }
        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
    }
    
    
    return answer;
}