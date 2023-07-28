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

        ListNode* node = head;
        ListNode* prev = node;

        while (node) {
            if (node->val == val) {
                if (node == head && !node->next) {
                    return nullptr;
                }

                if (node == head && node->next) {
                    head = node->next;
                    node = node->next;
                    prev = node;
                    continue;
                }

                if (node != head && !node->next) {
                    prev->next = nullptr;
                    return head;
                }

                if (node != head && node->next) {
                    prev->next = node->next;
                    node = node->next;
                    continue;
                }
            }

            prev = node;
            node = node->next;
        }

        return head;
    }
};
