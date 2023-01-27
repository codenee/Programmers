#include <string>
#include <vector>

using namespace std;
long long pow4[21], pow5[21];	//1 비트의 개수, 전체 비트 개수

int dfs(int n, long long l, long long r, long long s, long long e) {
    if (l <= s && r >= e) {
        return pow4[n];
    }
    if (l > e || r < s) {
        return 0;
    }
    long long rdata = 0;
    if (n == 1) {
        if (s >= l && s <= r) {
            rdata++;    //index = 0 : {1}1011
        }
        if (s + 1 >= l && s + 1 <= r) {
            rdata++;    //index = 1 : 1{1}011
        }
        if (s + 3 >= l && s + 3 <= r) {
            rdata++;    //index = 3 : 110{1}1
        }
        if (s + 4 >= l && s + 4 <= r) {
            rdata++;    //index = 4 : 1101{1}
        }
    }
    else {
        rdata += dfs(n - 1, l, r, s, s + pow5[n - 1] - 1);                   	// 1 ~ 5
        rdata += dfs(n - 1, l, r, s + pow5[n - 1], s + pow5[n - 1] * 2 - 1); 	// 6 ~ 10
        rdata += dfs(n - 1, l, r, s + pow5[n - 1] * 3, s + pow5[n - 1] * 4 - 1);  // 16 ~ 20
        rdata += dfs(n - 1, l, r, s + pow5[n - 1] * 4, s + pow5[n - 1] * 5 - 1);  // 21 ~ 25
    }
    return rdata;
}

int solution(int n, long long l, long long r) {
    int answer = 0;
    pow5[0] = pow4[0] = 1;
    for (int i = 1; i <= n; i++) {
        pow5[i] = pow5[i - 1] * 5;
        pow4[i] = pow4[i - 1] * 4;
    }
    return dfs(n, l, r, 1, pow5[n]);
}