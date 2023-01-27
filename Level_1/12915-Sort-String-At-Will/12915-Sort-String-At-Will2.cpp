#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int index = 0;
bool cmp(string a, string b){
    if(a[index] == b[index]){
        int len = a.size() < b.size() ? a.size() : b.size();
        for(int i = 0; i < len; i++){
            if(a[i] == b[i]){
                continue;
            }
            return a[i] < b[i];
        }
    }
    
    return a[index] < b[index];
}

vector<string> solution(vector<string> strings, int n) {

    index = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}