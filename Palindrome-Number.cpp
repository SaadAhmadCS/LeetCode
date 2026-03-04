1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0 || (x % 10 == 0 && x != 0)) {
5            return false;
6        }
7
8        int reversed_half = 0;
9
10        while (x > reversed_half) {
11            reversed_half = (reversed_half * 10) + (x % 10);
12            x = x / 10;
13        }
14
15        return x == reversed_half || x == reversed_half / 10;
16    }
17};