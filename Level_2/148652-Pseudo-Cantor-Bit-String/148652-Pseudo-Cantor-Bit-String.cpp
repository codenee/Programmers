#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

long long N, L, R;
int result = 0;

int dfs(long long num){
    if(num <= 5){
        string str("11011");
        str = str.substr(0, num);
        return count(str.begin(), str.end(), '1');
    }
    int base = 1;
    while( powl(5, base + 1) < num){
        base += 1;
    }
    long long section = num / ( powl(5, base));
    long long remainder = num % ( (long long)powl(5, base));
    
    result = section * ( powl(4, base));
    if(section >= 3){
        result -= (powl(4, base));
    }
    if(section == 2){
        return result;
    }
    else{
        return result + dfs(remainder);
    }
}

int solution(int n, long long l, long long r) {
    N = n, L = l, R = r;
    int answer = dfs(r) - dfs(l-1);
    return answer;
}