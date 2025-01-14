#include <string>
#include <vector>

using namespace std;

int countDivisors(int n)
{
    int count = 0;
    for(int i = 1; i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}

int solution(int left, int right) {
    int answer = 0;
    for(int num = left; num<=right; num++)
    {
        int divisors = countDivisors(num);
        divisors%2==0 ? answer += num : answer -= num;
    }
       
    return answer;
}