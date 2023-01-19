#include <string>
#include <vector>

using namespace std;
int solution(int a, int b, int n) {
    int answer = 0;
    
    while( a <= n){
        int m = n / a;
        n = n % a + b * m;
        int k = b * m;
        answer += k;
    }
    
    return answer;
}
