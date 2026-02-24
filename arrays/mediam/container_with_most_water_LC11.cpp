#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int maxwater = 0;
    int lp = 0;
    int rp = height.size() - 1;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currwater = w * ht;

        maxwater = max(maxwater, currwater);

        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int result = maxArea(height);

    cout << "Maximum Water Stored: " << result << endl;

    return 0;
}