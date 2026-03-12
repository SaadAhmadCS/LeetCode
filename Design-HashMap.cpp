1#include <vector>
2
3using namespace std;
4
5class MyHashMap {
6private:
7    vector<int> map;
8
9public:
10    MyHashMap() {
11        map.resize(1000001, -1);
12    }
13    
14    void put(int key, int value) {
15        map[key] = value;
16    }
17    
18    int get(int key) {
19        return map[key];
20    }
21    
22    void remove(int key) {
23        map[key] = -1;
24    }
25};