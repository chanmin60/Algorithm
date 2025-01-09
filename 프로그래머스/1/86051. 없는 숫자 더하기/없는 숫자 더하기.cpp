#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool find[10] = {false};
    for(int number : numbers){
        find[number]=true;
    }
    for(int i=0;i<=9;i++){
        if(!find[i]){
        answer+=i;
        }
    }
    return answer;
}