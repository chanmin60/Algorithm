#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int n = number.size();

    // 3개의 요소를 선택하는 모든 조합을 검사합니다.
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (number[i] + number[j] + number[k] == 0) {
                    ++answer;
                }
            }
        }
    }

    return answer;
}
