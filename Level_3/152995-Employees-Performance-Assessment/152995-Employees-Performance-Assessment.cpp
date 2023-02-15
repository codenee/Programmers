#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

struct Emp {
    int sc;
    int sc2;
    int id;
    Emp(int a, int b, int c) : sc(a), sc2(b), id(c) {}
    bool operator<(const Emp& b)const {
        if (sc == b.sc) {
            return sc2 > b.sc2;
        }
        return sc > b.sc;
    }
};
int solution(vector<vector<int>> scores) {

    int target = scores[0][0] + scores[0][1];
    vector<Emp> vec;
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i][0] > scores[0][0] && scores[i][1] > scores[0][1]) {
            return -1;
        }
        vec.push_back(Emp(scores[i][0], scores[i][1], i));
    }

    sort(begin(vec), end(vec));

    map<int, int> hash;
    vector<int> scoreList;

    for (int i = 0; i < vec.size(); i++) {
        bool flag = true;
        for (int j = 0; j < i; j++) {
            if (vec[j].sc > vec[i].sc && vec[j].sc2 > vec[i].sc2) {
                flag = false;
                break;
            }
        }
        if (flag == false) {
            continue;
        }

        int sum = vec[i].sc + vec[i].sc2;

        if (!hash.count(sum)) {
            scoreList.push_back(sum);
        }
        hash[sum] += 1;
    }

    sort(begin(scoreList), end(scoreList), greater<int>());
 
    int answer = 1;
    
    for (int i = 0; i < scoreList.size(); i++) {
        if (scoreList[i] == target) {
            return answer;
        }
        answer += hash[scoreList[i]];
    }

    return answer;
}
