1#include <stack>
2#include <algorithm>
3using namespace std;
4class MinStack {
5private:
6    stack<int> main_stack;
7    stack<int> min_stack;
8public:
9    MinStack() {}
10    void push(int val) {
11        main_stack.push(val);
12        if (min_stack.empty()) {
13            min_stack.push(val);
14        } else {
15            min_stack.push(min(val, min_stack.top()));
16        }
17    }
18    void pop() {
19        main_stack.pop();
20        min_stack.pop();
21    }
22    int top() {
23        return main_stack.top();
24    }
25    int getMin() {
26        return min_stack.top();
27    }
28};