1#include <vector>
2
3class Solution {
4public:
5    int removeElement(std::vector<int>& nums, int val) {
6        int k = 0;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] != val) {
9                nums[k] = nums[i];
10                k++;
11
12            }
13        }
14        return k;
15    }
16};