#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;
    int maxArea = 0;

    while (l < r)
    {
        // Calculating the max area
        int currArea = min(height[l], height[r]) * (r - l);
        maxArea = max(maxArea, currArea);

        if (height[l] < height[r]) {
            l += 1;
        }
        else if (height[l] > height[r]) {
            r -= 1;
        }
    }

    return maxArea;
}

int main()
{
    vector<int> height = { 2,3,10,5,7,8,9 };

    cout << maxArea(height);

    return 0;
}