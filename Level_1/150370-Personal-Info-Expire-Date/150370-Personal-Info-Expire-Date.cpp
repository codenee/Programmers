#include <string>
#include <vector>
#include <map>

using namespace std;
void parse(string str, vector<int>& vec, const string& delimiter){
    int pos = 0;
    string token("");
    while( (pos = str.find(delimiter)) != string::npos ){
        token = str.substr(0, pos);
        str.erase(0, pos + delimiter.length());
        vec.push_back(stoi(token));
    }
    vec.push_back(stoi(str));
}

bool checkDay(int term, vector<int>& curDay, const vector<int>& todays){
    curDay[0] = curDay[0] + (curDay[1] + term ) / 12;
    curDay[1] = (curDay[1] + term) % 12;
    curDay[2] -= 1;
    if( curDay[2] == 0){
        curDay[1] -= 1;
        curDay[2] = 28;
    }
    if(curDay[1] == 0){
        curDay[0] -= 1;
        curDay[1] = 12;
    }

    for(int i = 0; i < 3; i++){
        if(curDay[i] < todays[i]){
            return true;
        }
        else if(curDay[i] > todays[i]){
            return false;
        }
    }
    return false;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    map<char, int> term;
    for(const auto& it : terms){
        char c = it[0];
        int n = stoi(it.substr(2, it.length() - 2));
        term[c] = n;
    }
    vector<int> todays;
    parse(today, todays, ".");
    vector<int> answer;
    for(int i = 0; i < privacies.size(); i++){
        int pos = privacies[i].find(" ");
        string str = privacies[i].substr(0, pos);
        string sterm= privacies[i].substr(pos+1, 1);
        vector<int> curday;
        parse(str, curday, ".");
        if(checkDay(term[sterm[0]], curday, todays)){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}