#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void parse(string str, string& value, string& reporter){
    int pos = 0;
    while((pos = str.find(" ")) != string::npos){
        reporter = str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    value = str;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    const int n = id_list.size();
    map<string, int> hId;
    for(int i = 0; i < n; i++){
        hId[id_list[i]] = i;
    }
    
    vector<pair<int, int>> v;
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    for(const auto& s : report){
        string value(""), reporter("");
        parse(s, value, reporter);
        v.push_back({hId[reporter], hId[value]});
    }
    vector<int> cnt(n), ret(n);
    for(const auto& it : v){
        cnt[it.second]++;
    }
    for(const auto& it : v){
        if(cnt[it.second] >= k){
            ret[it.first]++;
        }
    }
    return ret;
}