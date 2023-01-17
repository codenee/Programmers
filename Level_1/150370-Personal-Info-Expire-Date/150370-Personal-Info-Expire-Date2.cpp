vector<int> solution3(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    int cur = stoi(today.substr(0,4)) * 12 * 28 + (stoi(today.substr(5,2))-1) * 28 + stoi(today.substr(8,2));
    vector<int> term(26, 0);
    for(int i=0; i<terms.size(); i++) {
        int type = (int)terms[i][0] - 65;
        term[type] = stoi(terms[i].substr(2, terms[i].length()-2));
    }

    for(int i=0; i<privacies.size(); i++) {
        string s = privacies[i];
        int start = stoi(s.substr(0,4)) * 12 * 28 + (stoi(s.substr(5,2))-1) * 28 + stoi(s.substr(8,2));
        int period = term[(int)s[11] - 65];
        int end = start + 28*period - 1;
        if(end < cur) answer.push_back(i+1);
    }

    return answer;
}