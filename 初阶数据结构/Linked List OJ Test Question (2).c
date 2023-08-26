#define _CRT_SECURE_NO_WARNINGS



//题目1：链表中倒数第k个结点
//https ://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tpId=13&&tqId=11167&rp=2&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param pListHead ListNode类
  * @param k int整型
  * @return ListNode类
  */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
    struct ListNode* slow, * fast;
    slow = fast = pListHead;
    while (k--)
    {
        if (fast == NULL)
            return NULL;

        fast = fast->next;
    }
    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}


//2.合并两个有序链表
//https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//带哨兵位
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* head, * tail;
    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    tail->next = NULL;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            tail = tail->next;

            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            tail = tail->next;

            list2 = list2->next;
        }
    }
    if (list1)
        tail->next = list1;

    if (list2)
        tail->next = list2;

    struct ListNode* list = head->next;
    free(head);
    return list;
}



3.链表分割
https ://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking/*
struct ListNode {
    int val;
    struct ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
}; */
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x)
    {
        // write code here
        struct ListNode* greaterhead, * greatertail, * lesshead, * lesstail;
        greaterhead = greatertail = (struct ListNode*)malloc(sizeof(struct ListNode));
        lesshead = lesstail = (struct ListNode*)malloc(sizeof(struct ListNode));
        greatertail->next = NULL;
        lesstail->next = NULL;

        struct ListNode* cur = pHead;
        while (cur)
        {
            if (cur->val < x)
            {
                lesstail->next = cur;
                lesstail = lesstail->next;
            }
            else
            {
                greatertail->next = cur;
                greatertail = greatertail->next;
            }
            cur = cur->next;
        }
        lesstail->next = greaterhead->next;

        greatertail->next = NULL;
        struct ListNode* head = lesshead->next;
        free(greaterhead);
        free(lesshead);

        return head;
    }
};


4.相交链表
https ://leetcode-cn.com/problems/intersection-of-two-linked-lists/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
    struct ListNode* curA = headA, * curB = headB;
    int lenA = 1, lenB = 1;
    while (curA->next)
    {
        curA = curA->next;
        lenA++;
    }
    while (curB->next)
    {
        curB = curB->next;
        lenB++;
    }
    if (curA != curB)
    {
        return NULL;
    }

    //求第一个交点
    struct ListNode* shortList = headA, * longlist = headB;
    if (lenA > lenB)
    {
        shortList = headB;
        longlist = headA;
    }

    int gap = abs(lenA - lenB);

    //长的先走gap步

    while (gap--)
    {
        longlist = longlist->next;
    }

    while (shortList != longlist)
    {
        shortList = shortList->next;
        longlist = longlist->next;
    }
    return shortList;
}




5.环形链表
https ://leetcode-cn.com/problems/linked-list-cycle/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head, * slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}