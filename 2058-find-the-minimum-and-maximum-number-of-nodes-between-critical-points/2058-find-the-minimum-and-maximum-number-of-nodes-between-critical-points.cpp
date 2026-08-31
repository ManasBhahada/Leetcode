class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        int currentindex = 1;
        int firstcriticalindex = -1;
        int lastcriticalindex = -1;
        int mindistance = INT_MAX;
        while (curr->next != nullptr) {
            ListNode* nextNode = curr->next;
            if ((curr->val > prev->val && curr->val > nextNode->val) || 
                (curr->val < prev->val && curr->val < nextNode->val)) {   
                if (firstcriticalindex == -1) {
                    firstcriticalindex = currentindex;
                } else {
                    mindistance = min(mindistance, currentindex - lastcriticalindex);
                }
                lastcriticalindex = currentindex;
            }   
            prev = curr;
            curr = nextNode;
            currentindex++;
        }
        if (mindistance == INT_MAX) {
            return {-1, -1};
        }
        int maxdistance = lastcriticalindex - firstcriticalindex;  
        return {mindistance, maxdistance};
    }
};