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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr)
        {
            count++;
            temp= temp->next;
        }
        if (count == 0) return head;
        
        k = k % count;
        temp = head;
        vector<int> nums;
        while (temp != nullptr)
        {
             nums.push_back(temp->val);
             temp = temp->next;
        } 

    
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
     
     ListNode * newhead = new ListNode(nums[0]);
     ListNode * curr = newhead;
     for(int i = 1;i< nums.size();i++)
     {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;

     }
     return newhead;
    }
};