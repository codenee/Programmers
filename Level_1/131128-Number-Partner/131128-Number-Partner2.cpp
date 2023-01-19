string solution(string X, string Y) {
    string answer = "";
    unordered_map<char, int> mx;
    unordered_map<char, int> my;

    for(char i = '0'; i <='9'; i++){
        mx.insert(make_pair(i, 0));
        my.insert(make_pair(i, 0));
    }

    for(auto c : X){
            mx[c]++;
    }

    for(auto c : Y){
            my[c]++;
    }

    for (char i = '9'; i >= '0'; i--){
        int m = min(mx[i], my[i]);
        for(int j = 0; j < m; j++){
            answer += i;
        }
    }

    if (answer == "") return "-1";
    if (answer[0] == '0') return "0";

    return answer;
}
int main(){

    string x{"100"}, y{"123450"};
    string reuslt = solution(x, y);
    
    return 0;
}
