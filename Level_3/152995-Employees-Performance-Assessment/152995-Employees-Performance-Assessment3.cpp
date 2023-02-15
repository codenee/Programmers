#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const bool cmp(vector<int>& a, vector<int>& b){
    return a[0] != b[0] ? a[0] > b[0] : a[1] < b[1];
}

int solution(vector<vector<int>> scores) {
    int rank = 0;
    int nMax = 0;
    
    vector<int> vecSum, target = scores[0];
    sort(begin(scores), end(scores), cmp);
    
    for(vector<int> it : scores){
        if(it[1] < nMax){
            if(it == target){
                return -1;
            }
        }
        else{
            vecSum.push_back(it[0] + it[1]);
            nMax = max(nMax, it[1]);
        }
    }
    sort(begin(vecSum), end(vecSum), greater<int>());
    rank = find( begin(vecSum), end(vecSum), target[0] + target[1]) - begin(vecSum) + 1;

    return answer;
}