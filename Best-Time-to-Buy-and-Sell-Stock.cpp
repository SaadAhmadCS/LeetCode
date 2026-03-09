1#include <vector>
2using namespace std;
3
4class Solution {
5public:
6    int maxProfit(vector<int>& prices) {
7        int lowest_price = prices[0]; 
8        int max_profit = 0;           
9
10        for (int today_price : prices) {
11            
12            if (today_price < lowest_price) {
13                lowest_price = today_price;
14            } 
15            else if (today_price - lowest_price > max_profit) {
16                max_profit = today_price - lowest_price;
17            }
18            
19        }
20
21        return max_profit;
22    }
23};