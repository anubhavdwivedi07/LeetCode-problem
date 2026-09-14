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
    bool isPalindrome(ListNode* head) {
        ListNode * temp = head;
        ListNode* prev = nullptr;
        while(temp != nullptr)
        {   
            ListNode * newNode = new ListNode(temp->val);
            newNode->next = prev;
            prev = newNode;
            temp = temp->next;
        }
       while(head!= nullptr && prev != nullptr )
       {
            if(head->val!=prev->val)
            {
                return false;
            }
            head=head->next;
            prev=prev->next;
       }
       return true;
    }
};