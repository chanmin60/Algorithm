#include <algorithm>

using namespace std;

long long solution(int price, int money, int count)
{
    long long totalCost = 0;
    for(int i = 1; i <= count; i++)
    {
        totalCost += static_cast<long long>(price) * i; // 요금 인상 계산
    }

    return max(0LL, totalCost - static_cast<long long>(money)); // 부족한 금액 또는 0 반환
}


