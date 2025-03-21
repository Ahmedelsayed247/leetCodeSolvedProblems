class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next)
            return nullptr;
        
        ListNode *fast = head, *slow = head;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) 
                break;
        }
        
        if (!fast || !fast->next)
            return nullptr;

        ListNode *slow2 = head;
        while (slow != slow2) {
            slow = slow->next;
            slow2 = slow2->next;
        }
        
        return slow; 
    }
};
