#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    int mid = len/2;
    if(len%2==0)
    {
        answer = s.substr(mid-1, 2);
    }
    else
    {
        answer = s.substr(mid, 1);
    }
    return answer;
}