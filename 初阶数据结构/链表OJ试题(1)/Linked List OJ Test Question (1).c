#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

////https ://leetcode.cn/problems/remove-linked-list-elements/description/
////(1)�Ƴ�����Ԫ��
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
//            //ͷɾ
//            if (cur == head)
//            {
//                head = cur->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                //ɾ��
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



//2.��ת����
//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
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
//        //��ָ��
//        n2->next = n1;
//
//        //����
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}



//3.������м���
//���㵥�����ͷ��� head �������ҳ�������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣
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