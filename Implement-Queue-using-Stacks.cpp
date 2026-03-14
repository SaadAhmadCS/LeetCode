1#include <stack>
2using namespace std;
3class MyQueue {
4private:
5    stack<int> input_stack;
6    stack<int> output_stack;
7public:
8    MyQueue() {}
9    void push(int x) {
10        input_stack.push(x);
11    }
12    int pop() {
13        peek(); 
14        int front_person = output_stack.top();
15        output_stack.pop();
16        return front_person;
17    }
18    int peek() {
19        if (output_stack.empty()) {
20            
21            while (!input_stack.empty()) {
22                output_stack.push(input_stack.top());
23                input_stack.pop();
24            }
25        }
26        return output_stack.top();
27    }
28    bool empty() {
29        return input_stack.empty() && output_stack.empty();
30    }
31};