#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

////https ://leetcode.cn/problems/remove-linked-list-elements/description/
////(1)移除链表元素
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val == val)
//        {
//            //头删
//            if (cur == head)
//            {
//                head = cur->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                //删除
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//        }
//        else
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//    }
//    return head;
//}


//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	assert(n1);
//
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	assert(n2);
//
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	assert(n3);
//
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	assert(n4);
//
//	n1->val = 7;
//	n2->val = 7;
//	n3->val = 7;
//	n4->val = 7;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//
//	struct ListNode* head = removeElements(n1, 7);
//
//
//	return 0;
//}



//2.反转链表
//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* newhead = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//
//        cur->next = newhead;
//        newhead = cur;
//
//        cur = next;
//    }
//    return newhead;
//}
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    if (head == NULL)
//        return NULL;
//    struct ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    n3 = n2->next;
//    while (n2)
//    {
//        //倒指向
//        n2->next = n1;
//
//        //迭代
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}



//3.链表的中间结点
//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* slow, * fast;
    slow = fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}