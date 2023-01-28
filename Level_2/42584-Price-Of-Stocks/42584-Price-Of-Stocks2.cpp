#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    int len = prices.size();
    vector<int> answer(len, 0);
    stack<int> st;
    for(int i = 0; i < len; i++){
        while(!st.empty() && prices[st.top()] > prices[i]){
            answer[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
    
    while(!st.empty()){
        answer[st.top()] = len - st.top() -1;
        st.pop();
    }
    return answer;
}