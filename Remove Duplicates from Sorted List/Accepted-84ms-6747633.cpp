// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Remove Duplicates from Sorted List
// https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL) {
            return head;
        }
        ListNode *pre = head, *p = head->next;
        while (p != NULL) {
            if (p->val == pre->val) {
                pre->next = p->next;
                delete p;
                p = pre->next;
            } else {
                pre = p;
                p = p->next;
            }
        }
        return head;
    }
};

// 
// Given a sorted linked list, delete all duplicates such that each element appear only once. For example, Given 1->1->2, return 1->2. Given 1->1->2->3->3, return 1->2->3. Show Tags Linked List
// 
