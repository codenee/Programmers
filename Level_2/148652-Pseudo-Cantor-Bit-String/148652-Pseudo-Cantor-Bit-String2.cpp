int f(int n, long long x){
    return n == 1 ? x % 5 != 2 : !f(n - 1, x / 5) ? 0 : x % 5 != 2;
}
int solution(int n, long long l, long long r) {
    int answer = 0;
    for(long long i = l - 1; i < r; i++) answer += f(n, i);
    return answer;
}
