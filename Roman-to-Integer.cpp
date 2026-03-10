1#include <unordered_map>
2#include <string>
3using namespace std;
4class Solution {
5public:
6    int romanToInt(string s) {
7        unordered_map<char, int> roman = {
8            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
9            {'C', 100}, {'D', 500}, {'M', 1000}
10        };
11        int total = 0;
12        for (int i = 0; i < s.length(); i++) {
13            int current_val = roman[s[i]];
14            if (i + 1 < s.length()) {
15                int next_val = roman[s[i + 1]];
16                if (current_val < next_val) {
17                    total -= current_val;
18                } else {
19                    total += current_val;
20                }
21            } 
22            else {
23                total += current_val;
24            }
25        }
26        return total;
27    }
28};