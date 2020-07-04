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
    ListNode* removeElements(ListNode* head, int val) {
        // If head is null, there won't be a node to proceed to, so just return.
        if (head == nullptr) {
            return nullptr;
        }

        // Traverse the list
        ListNode* currentNode = head;
        ListNode* nextNode = currentNode->next;
        while (nextNode != nullptr) {
            // If the next node's value is equal to `val`, delete it and
            // change the current node's `next` to point at the node after the
            // next.
            if (nextNode->val == val) {
                currentNode->next = nextNode->next;
                delete nextNode;
            } else {
                currentNode = nextNode;
            }

            nextNode = currentNode->next;
        }

        // If the list only contained the head, none of the above would be
        // called. So we handle it here instead before returning.
        if (head->val == val) {
            head = head->next;
        }

        return head;
    }
};
