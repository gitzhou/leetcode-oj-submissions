// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 147. Insertion Sort List
// https://leetcode.com/problems/insertion-sort-list/
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
    ListNode *insertionSortList(ListNode *head) {
        if (head == NULL || head->next == NULL) { // 小于2个结点
            return head;
        }
        ListNode *pList = NULL;
        ListNode *p = head;
        while (p != NULL) {
            head = head->next;
            p->next = NULL;
            if (pList == NULL) { // 新链表第一个结点
                pList = p;
            } else { // 插入排序
                ListNode *first = NULL, *second = pList;
                while (second != NULL && second->val < p->val) {
                    first = second;
                    second = second->next;
                }
                if (first == NULL) { // 在新链表头插入
                    p->next = pList;
                    pList = p;
                } else { // 在新链表其它位置插入
                    p->next = first->next;
                    first->next = p;
                }
            }
            p = head;
        }
        return pList;
    }
};

// 
// Sort a linked list using insertion sort. Subscribe to see which companies asked this question Show Tags Linked List Sort Show Similar Problems (M) Sort List
// 
