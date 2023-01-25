#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
  string answer = "";

	map<char, int> mk;
	for (int i = 0; i < choices.size(); i++) {
			int cnt = 0;
			if (choices[i] <= 4) {
				cnt = 4 - choices[i];
				mk[survey[i][0]] += cnt;
				break;

			}
			else {
				cnt = choices[i] - 4;
				mk[survey[i][1]] += cnt;
				break;
			}
		
	}

	vector<char> vec = { 'R' , 'T' , 'C' , 'F' , 'J' , 'M' , 'A', 'N' };

	int pre = 0;
	for (int i = 1; i < vec.size(); i += 2) {
		
		char c;
		if (mk[vec[pre]] == mk[vec[i]]) {
			c = vec[i] < vec[pre] ? vec[i] : vec[pre];
		}
		else {
			c= mk[vec[pre]] < mk[vec[i]] ? vec[i] : vec[pre];
		}
		pre += 2;
		answer += c;
	}

	return answer;
}