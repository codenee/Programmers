#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, long long l, long long r)
{
    int answer=0;

    l--; r--;
    long div, ldiv, rdiv, cutoff;
    string str="1", tmp;
    for(int i=1; i<=n; i++)
    {
        tmp="";
        for(int j=0; j<str.length(); j++)
        {
            if(str[j]=='1') tmp+="11011";
            else            tmp+="00000";
        }
        str=tmp; 
        if(i==n)
        {
            for(int k=l; k<=r; k++)
                if(str[k]=='1')
                    answer++;
            break;
        }
        div=pow(5, n-i);
        ldiv=l/div; rdiv=r/div; cutoff=ldiv*div;
        str=str.substr(ldiv, rdiv-ldiv+1);
        l-=cutoff; r-=cutoff;
    }

    return answer;
}