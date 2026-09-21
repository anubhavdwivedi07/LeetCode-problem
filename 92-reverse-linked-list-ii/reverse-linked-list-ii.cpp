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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)
        {
            return head;
        }
        if(head==nullptr || head->next==nullptr)
            return head;
        
        ListNode* temp= head;
        ListNode* curr=head;
        for (int i = 1; i < left; i++) 
                temp = temp->next; 
        for(int i =1;i<right;i++)
            curr=curr->next;
        int m = (right-left+1)/2;
        
        int r = right;
        for (int i = 0; i < m; i++) {
            swap(temp->val, curr->val);
            temp = temp->next;
            r--;

            curr = head;
            for (int j = 1; j < r; j++) 
                    curr = curr->next; 
        }
        return head;
    }
};