1#include <vector>
2#include <algorithm>
3
4class Solution {
5public:
6    int maxSubArray(vector<int>& nums) {
7        int max_score = nums[0]; 
8        int current_score = 0;   
9
10        for (int i = 0; i < nums.size(); i++) {
11            current_score += nums[i];
12
13            if (current_score > max_score) {
14                max_score = current_score;
15            }
16
17            if (current_score < 0) {
18                current_score = 0;
19            }
20        }
21
22        return max_score;
23    }
24};