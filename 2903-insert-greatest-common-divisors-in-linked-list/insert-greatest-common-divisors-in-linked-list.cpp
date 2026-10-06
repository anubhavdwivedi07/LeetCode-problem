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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next == nullptr)
            return head;
         ListNode* curr  = head ->next;
         ListNode* temp = head;
         while(curr!=nullptr)
         {
            ListNode* node = new ListNode(gcd(temp->val, curr->val));
            temp->next = node;
            node->next = curr;

            temp = curr;
            curr= curr->next;
         }
         return head;
    }
};