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
        if (head == nullptr) {
            return false;
        }

        if (!head->next) {
            return true;
        }

        ListNode *slow = head;
        int length = 0;

        while (slow) {
            ++length;
            slow = slow->next;
        }

        stack<int> st; 
        ListNode *node = head;
        st.push(node->val);
        
        for (int i = 1; i < length / 2; ++i) {
            node = node->next;
            st.push(node->val);
        }

        if (length % 2 == 0) {
            node = node->next;

            while (node) {
                if (node->val != st.top()) {
                    return false;
                }

                node = node->next;
                st.pop();
            }

        } else {
            node = node->next->next;

            while (node) {
                if (node->val != st.top()) {
                    return false;
                }

                node = node->next;
                st.pop();
            }
        }

        return true; 
    }
};
