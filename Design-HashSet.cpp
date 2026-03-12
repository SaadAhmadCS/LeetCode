1#include <vector>
2using namespace std;
3
4class MyHashSet {
5private:
6    vector<bool> set;
7public:
8    MyHashSet() {
9        set.resize(1000001, false);
10    }
11    void add(int key) {
12        set[key] = true; 
13    }
14    void remove(int key) {
15        set[key] = false; 
16    }
17    bool contains(int key) {
18        return set[key]; 
19    }
20};