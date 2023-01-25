#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void myParse(string str, string& reporter, string& value, const string& delimiter){
    int pos = 0;
    while( (pos = str.find(delimiter)) != string::npos ){
        reporter = str.substr(0, pos);
        str.erase(0, pos + delimiter.length());
    }
    value = str;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    map<string, int> hID;
    for(int i = 0; i < id_list.size(); i++){
        hID[id_list[i]] = i;
    }
    
    map<string, set<string>> mReport;
    for(const auto &it : report){
        string reporter = "", value = "";
        const string delimiter = " ";
        myParse(it, reporter, value, delimiter);
        mReport[value].insert(reporter);
    }
    
    vector<int> answer(id_list.size(), 0);
    for(const auto &it : mReport){
        if(it.second.size() >= k){
            for(const auto &repo : it.second){
                answer[hID[repo]]++;
            }
        }
    }
    
    
    return answer;
}