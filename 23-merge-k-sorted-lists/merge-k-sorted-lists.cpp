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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         vector<int> values;

        for (ListNode* head : lists) {
            ListNode* node = head;
            while (node) {
                values.push_back(node->val);
                node = node->next;
            }
        }

        sort(values.begin(), values.end());

        ListNode dummy(0);
        ListNode* curr = &dummy;
        for (int v : values) {
            curr->next = new ListNode(v);
            curr = curr->next;
        }

        return dummy.next;
    }
};