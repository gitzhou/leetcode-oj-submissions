// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Add Two Numbers
// https://leetcode.com/problems/add-two-numbers/
// 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *p1 = l1, *p2 = l2, *result = NULL, *tail = NULL;
        int carry = 0;
        while (p1 != NULL && p2 != NULL) {
            ListNode *p = new ListNode((p1->val + p2->val + carry) % 10);
            carry = (p1->val + p2->val + carry) / 10;
            if (result == NULL) {
                result = p;
                tail = result;
            } else {
                tail->next = p;
                tail = p;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        while (p1 != NULL) {
            ListNode *p = new ListNode((p1->val + carry) % 10);
            carry = (p1->val + carry) / 10;
            tail->next = p;
            tail = p;
            p1 = p1->next;
        }
        while (p2 != NULL) {
            ListNode *p = new ListNode((p2->val + carry) % 10);
            carry = (p2->val + carry) / 10;
            tail->next = p;
            tail = p;
            p2 = p2->next;
        }
        if (carry != 0) {
            ListNode *p = new ListNode(carry);
            tail->next = p;
        }
        return result;
    }
};

