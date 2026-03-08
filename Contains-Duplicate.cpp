1#include <vector>
2#include <unordered_set>
3
4using namespace std;
5
6class Solution {
7public:
8    bool containsDuplicate(vector<int>& nums) {
9        unordered_set<int> seen;
10
11        for (int num : nums) {
12            
13            if (seen.count(num)) {
14                return true; 
15            }
16            
17            seen.insert(num);
18        }
19
20        return false;
21    }
22};