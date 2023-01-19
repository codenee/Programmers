int solution(string dartResult) {
    int answer = 0;
    int nScore[3] = {0,}, nCount = 0;

    regex e("(([0-9]+)(S|D|T)(\\*|#)*)");

    sregex_iterator it(dartResult.begin(), dartResult.end(), e);
    sregex_iterator end;

    while (it != end)
    {
        smatch sm = *it;
        // 점수 저장
        nScore[nCount] = stoi((string)sm[2]); 

        //S,D,T 적용
        if(sm[3] == "S")
            nScore[nCount] = nScore[nCount];
        else if(sm[3] == "D")
            nScore[nCount] = nScore[nCount]*nScore[nCount];
        else if(sm[3] == "T")
            nScore[nCount] =nScore[nCount]*nScore[nCount]*nScore[nCount];

        //*, # 적용
        if(sm[4] == "*")
        {
            if(nCount == 0)
            {
                nScore[nCount] *= 2;
            }
            else
            {
                nScore[nCount - 1] *= 2;
                nScore[nCount] *= 2;
            }
        }

        if(sm[4] == "#")
        {
            nScore[nCount] *= -1;
        }

        nCount++;
        ++it;
    }

    answer = nScore[0] + nScore[1] + nScore[2];
    return answer;
}