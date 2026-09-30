/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
         vector<int> arr;
        int sum = 0;

        for (ListNode* cur = head->next; cur; cur = cur->next) {
            if (cur->val == 0) {
                arr.push_back(sum); 
                sum = 0;             
            } else {
                sum += cur->val;
            }
        }

        
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        for (int x : arr) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
    }
};