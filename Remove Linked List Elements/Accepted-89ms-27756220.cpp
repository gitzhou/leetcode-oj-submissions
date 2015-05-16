// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Remove Linked List Elements
// https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            ListNode *p = head->next;
            delete head;
            head = p;
        }
        ListNode *pre = head, *p = head;
        while (p != NULL) {
            if (p->val == val) {
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
// Remove all elements from a linked list of integers that have value val. Example Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6 Return: 1 --> 2 --> 3 --> 4 --> 5 Credits: Special thanks to @mithmatt for adding this problem and creating all test cases. Show Tags Linked List
// 
