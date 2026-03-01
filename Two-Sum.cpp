1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> seen;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            int current_number = nums[i];
8            int wanted = target - current_number; 
9            
10            if (seen.count(wanted)) {
11                return {seen[wanted], i}; 
12            }
13            
14            seen[current_number] = i;
15        }
16        
17        return {};
18    }
19};