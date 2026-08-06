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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=0;
        ListNode* chr = head;
        int var;
        if(head == NULL)
            return NULL;
        while(chr !=NULL)
        {
            n++;
            chr = chr->next;
        }

        ListNode* curr = head;
        while (n >= k)
        {
            ListNode* temp = curr;
            std::vector<int> vals;

            for (int i = 0; i < k; i++) {
                vals.push_back(temp->val);
                temp = temp->next;
            }

            int i = 0, j = k - 1;
            while (i < j)
            {
                var = vals[i];
                vals[i] = vals[j];
                vals[j] = var;
                i++;
                j--;
            }

            temp = curr;
            for (int i = 0; i < k; i++) {
                temp->val = vals[i];
                temp = temp->next;
            }

            for (int i = 0; i < k; i++) {
                curr = curr->next;
            }

            n -= k;
        }

    return head;
    }
};