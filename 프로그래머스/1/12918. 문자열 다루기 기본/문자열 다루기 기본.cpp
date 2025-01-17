#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() !=4 && s.length() != 6)
    {
        return false;
    }
    
    for(char a : s)
    {
        if(!isdigit(a))
        {
            return false;
        }
    }
    
    return answer;
}