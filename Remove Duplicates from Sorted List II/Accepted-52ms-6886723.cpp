// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Remove Duplicates from Sorted List II
// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
// 

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode *from = head, *to = head->next, *tail = head;
        while ((to = find(from)) != NULL) {
            if (from->next != to) {
                if (from == head) {
                    head = to;
                    tail = to;
                } else {
                    tail->next = to;
                }
                release(from, to);
                from = to;
            } else {
                tail = from;
                from = to;
            }
        }
        if (from->next != to) {
            if (from == head) {
                head = to;
                tail = to;
            } else {
                tail->next = to;
            }
            release(from, to);
        }
        return head;
    }
    
private:
    // 从节点p开始在链表中查找第一个与p不同val的节点
    ListNode *find(ListNode *p) {
        int val = p->val;
        while (p != NULL) {
            if (p->val == val) {
                p = p->next;
            } else {
                break;
            }
        }
        return p;
    }
    
    // 删除链表[from, to)之间的节点
    void release(ListNode *from, ListNode *to) {
        while (from != to) {
            ListNode *q = from;
            from = from->next;
            delete q;
        }
    }
};


// 
// Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. For example, Given 1->2->3->3->4->4->5, return 1->2->5. Given 1->1->1->2->3, return 2->3. Show Tags Linked List
// 
