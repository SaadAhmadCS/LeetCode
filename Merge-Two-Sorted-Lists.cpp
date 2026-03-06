1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        ListNode dummy(0);
5        ListNode* tail = &dummy;
6
7        while (list1 != nullptr && list2 != nullptr) {
8            
9            if (list1->val <= list2->val) {
10                tail->next = list1;   
11                list1 = list1->next; 
12            } else {
13                tail->next = list2;   
14                list2 = list2->next;  
15            }
16            
17            tail = tail->next;
18        }
19
20        if (list1 != nullptr) {
21            tail->next = list1;
22        } else {
23            tail->next = list2;
24        }
25
26        return dummy.next;
27    }
28};