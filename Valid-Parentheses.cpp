1#include <stack>
2#include <string>
3
4using namespace std;
5
6class Solution {
7public:
8    bool isValid(string s) {
9        stack<char> st; 
10
11        for (char c : s) {
12            
13            if (c == '(' || c == '{' || c == '[') {
14                st.push(c);
15            } 
16            else {
17                if (st.empty()) {
18                    return false; 
19                }
20
21                char top_char = st.top();
22
23                if (c == ')' && top_char != '(') return false;
24                if (c == '}' && top_char != '{') return false;
25                if (c == ']' && top_char != '[') return false;
26
27                st.pop();
28            }
29        }
30
31        return st.empty();
32    }
33};