1#include <vector>
2#include <string>
3
4class Solution {
5public:
6    std::vector<std::string> fizzBuzz(int n) {
7        std::vector<std::string> result;
8
9        
10        for (int i = 1; i <= n; i++) {
11            
12            if (i % 3 == 0 && i % 5 == 0) {
13                result.push_back("FizzBuzz");
14            } 
15            else if (i % 3 == 0) {
16                result.push_back("Fizz");
17            } 
18            else if (i % 5 == 0) {
19                result.push_back("Buzz");
20            } 
21            else {
22                result.push_back(std::to_string(i));
23            }
24        }
25
26        return result;
27    }
28};