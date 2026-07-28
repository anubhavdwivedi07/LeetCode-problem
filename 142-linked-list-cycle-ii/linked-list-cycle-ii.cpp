class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> mp;
        ListNode* curr = head;
        while (curr != NULL) {
            if (mp.find(curr) != mp.end()) {
                return curr; 
            }
            mp.insert(curr);
            curr = curr->next;
        }
        return NULL; 
    }
};