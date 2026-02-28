1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 1;
5
6        for (int i = 1; i < nums.size(); i++) {
7
8            if (nums[i] != nums[i - 1]) {
9
10                nums[k] = nums[i];
11
12                k++;
13            }
14        }return k;
15    }
16};