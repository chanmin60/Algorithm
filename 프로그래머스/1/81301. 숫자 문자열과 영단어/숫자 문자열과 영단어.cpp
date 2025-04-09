#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string sol[10] = { "zero", "one","two","three","four","five","six","seven","eight","nine" };
    
    for (int i = 0; i < 10; i++) {
        size_t pos;
        while ((pos = s.find(sol[i])) != string::npos) {
            s.replace(pos, sol[i].length(), to_string(i));
        }
    }
    
    return stoi(s);
}