// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 160. Intersection of Two Linked Lists
// https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int alen = listLen(headA), blen = listLen(headB);
        ListNode *pIntersect = NULL;
        if (alen != 0 && blen != 0) {
            ListNode *pa = headA, *pb = headB;
            int diff = abs(alen - blen);
            if (diff != 0) {
                ListNode *pLonger = pa;
                if (alen < blen) {
                    pLonger = pb;
                }
                for (int i = 0; i < diff; ++i) {
                    pLonger = pLonger->next;
                }
                if (alen < blen) {
                    pb = pLonger;
                } else {
                    pa = pLonger;
                }
            }
            while (pa != NULL && pb != NULL) {
                if (pa == pb) {
                    pIntersect = pa;
                    break;
                }
                pa = pa->next;
                pb = pb->next;
            }
        }
        return pIntersect;
    }
    
private:
    int listLen(ListNode *list) {
        int len = 0;
        while (list != NULL) {
            ++len;
            list = list->next;
        }
        return len;
    }
};

// 
// Write a program to find the node at which the intersection of two singly linked lists begins. For example, the following two linked lists: 
// A:          a1 → a2
//                    ↘
//                      c1 → c2 → c3
//                    ↗            
// B:     b1 → b2 → b3
//  begin to intersect at node c1. Notes: If the two linked lists have no intersection at all, return null. The linked lists must retain their original structure after the function returns. You may assume there are no cycles anywhere in the entire linked structure. Your code should preferably run in O(n) time and use only O(1) memory. Credits: Special thanks to @stellari for adding this problem and creating all test cases. Subscribe to see which companies asked this question Show Tags Linked List
// 
