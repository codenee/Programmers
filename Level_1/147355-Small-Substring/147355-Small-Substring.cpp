#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long len = p.size();
    for(long long i = 0; i <= t.size() - len; i++){
        if( stoll( t.substr(i, len)) <= stoll(p)){
            answer++;
        }
    }
    
    return answer;
}