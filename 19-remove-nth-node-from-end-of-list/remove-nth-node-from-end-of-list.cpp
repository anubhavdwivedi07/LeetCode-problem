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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        vector<int> values;
        ListNode* curr = head;
        while (curr != nullptr) {
            values.push_back(curr->val);
            curr = curr->next;
        }

     
        int indexToRemove = values.size() - n;
        values.erase(values.begin() + indexToRemove);

        ListNode dummy(0);
        ListNode* tail = &dummy;
        for (int val : values) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }

        curr = head;
        while (curr != nullptr) {
            ListNode* temp = curr;
            curr = curr->next;
            delete temp;
        }

        return dummy.next;
    }
};