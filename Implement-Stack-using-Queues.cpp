1#include <queue>
2
3using namespace std;
4
5class MyStack {
6private:
7    queue<int> q;
8
9public:
10    MyStack() {}
11    
12    void push(int x) {
13        int previous_size = q.size();
14        
15        q.push(x);
16        
17        for (int i = 0; i < previous_size; i++) {
18            q.push(q.front());
19            q.pop();
20        }
21    }
22    
23    int pop() {
24        int front_person = q.front();
25        q.pop();
26        return front_person;
27    }
28    
29    int top() {
30        return q.front();
31    }
32    
33    bool empty() {
34        return q.empty();
35    }
36};