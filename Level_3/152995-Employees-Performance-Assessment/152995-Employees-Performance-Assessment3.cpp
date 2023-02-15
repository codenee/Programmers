#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool comp(vector<int> a, vector<int> b)
{
    return a[0] != b[0] ? a[0] > b[0] : a[1] < b[1];
}

int solution(vector<vector<int>> scores)
{
    int rank = 0;
    int max_score = 0;
    vector<int> vec = scores[0], vecSum;
    sort(scores.begin(), scores.end(), comp);
    for (vector<int> it : scores)
    {
        if (it[1] < max_score)
        {
            if (it == vec) return -1;
        }
        else
        {
            vecSum.push_back(it[0] + it[1]);
            max_score = max(max_score, it[1]);
        }
    }

    sort(vecSum.begin(), vecSum.end(), greater<int>());
    rank = find(vecSum.begin(), vecSum.end(), vec[0] + vec[1]) - vecSum.begin() + 1;

    return rank;
}