// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 19. Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        vector<ListNode *> ps;
        ListNode *p = head;
        while (p != NULL) {
            ps.push_back(p);
            p = p->next;
        }
        if (n == ps.size()) {
            if (ps.size() == 1) {
                return NULL;
            }
            return ps[1];
        }
        p = ps[ps.size() - n];
        ListNode *pre = ps[ps.size() - n - 1];
        pre->next = p->next;
        return head;
    }
};

// 
// Given a linked list, remove the nth node from the end of list and return its head. For example, 
//    Given linked list: 1->2->3->4->5, and n = 2.
// 
//    After removing the second node from the end, the linked list becomes 1->2->3->5.
//  Note: Given n will always be valid. Try to do this in one pass. Subscribe to see which companies asked this question Show Tags Linked List Two Pointers
// 
