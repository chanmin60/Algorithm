#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    string base3 = "";
    
    while (n>0)
    {
        base3 += to_string(n%3);
            n/=3;
    }
    reverse(base3.begin(), base3.end());
    
    int answer = 0;
    int pow = 1;
    for(int i = 0; i < base3.size(); ++i)
    {
        answer += (base3[i]-'0')*pow;
        pow *= 3;
    }
    return answer;
}