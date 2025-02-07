#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0;
    int max_height = 0;
    for(const auto& size : sizes)
    {
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);
        if(w> max_width)
        {
            max_width = w;
        }
        if(h> max_height)
        {
            max_height = h;
        }
    }
    
    return max_width * max_height;
}