#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int start = 0, end = nums.size() - 1, mid, ans = nums.size(), target = 5;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            ans = mid; // Found the target, store the index
            break;     // Exit the loop
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            ans = mid; // Update ans for insertion position
            end = mid - 1;
        }
    }

    cout << "Insert position: " << ans << endl;
    return 0;
}