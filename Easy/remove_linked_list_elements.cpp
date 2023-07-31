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
        if (head == nullptr) {
            return nullptr;
        }

        ListNode *node = head;
        ListNode *prev = head;

        while (node) {
            if (node->val == val && node == head) {
                head = head->next;
                node = head;
                prev = head;
                continue;
            }

            if (node->val == val && node->next) {
                prev->next = node->next;
                node = node->next;
                continue;
            } 

            if (node->val == val && !node->next) {
                prev->next = nullptr;
                node = node->next;
                continue;
            }

            prev = node;
            node = node->next;
        }

        return head;
    }
};
