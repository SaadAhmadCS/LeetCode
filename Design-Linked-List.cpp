1class MyLinkedList {
2private:
3    struct Node {
4        int val;
5        Node* next;
6        Node(int v) {
7            val = v; next = nullptr; 
8        }
9    };
10
11    int size;
12    Node* dummy;
13
14public:
15    MyLinkedList() {
16        size = 0;
17        dummy = new Node(0); 
18    }
19    
20    int get(int index) {
21        if (index < 0 || index >= size) return -1;
22        
23        Node* curr = dummy->next;
24        for (int i = 0; i < index; i++) {
25            curr = curr->next;
26        }
27        return curr->val;
28    }
29    
30    void addAtHead(int val) {
31        addAtIndex(0, val);
32    }
33    
34    void addAtTail(int val) {
35        addAtIndex(size, val);
36    }
37    
38    void addAtIndex(int index, int val) {
39        if (index > size) return;
40        if (index < 0) index = 0;
41        
42        Node* prev = dummy;
43        for (int i = 0; i < index; i++) {
44            prev = prev->next;
45        }
46        
47        Node* new_node = new Node(val);
48        
49        new_node->next = prev->next;
50        prev->next = new_node;
51        
52        size++; 
53    }
54    
55    void deleteAtIndex(int index) {
56        if (index < 0 || index >= size) return;
57        
58        Node* prev = dummy;
59        for (int i = 0; i < index; i++) {
60            prev = prev->next;
61        }
62        
63        Node* to_delete = prev->next;
64        
65        prev->next = to_delete->next;
66        
67        delete to_delete;
68        size--; 
69    }
70};