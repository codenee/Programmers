#include <string>
#include <vector>
#include <cmath>

using namespace std;

int divisor(int num){
    int cnt = 0;
    for(int i = 1; i <= sqrt(num); i++){
        if( num % i == 0){
            cnt++;
            if( i != num / i){
                cnt++;
            }
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1; i <= number; i++){
        int n = divisor(i);
         answer += n > limit ? power : n;
    }
    return answer;
}