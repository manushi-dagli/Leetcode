#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *ans = new ListNode();
        ListNode *head = ans;
        if (list1->val < list2->val)
        {
            ans->val = list1->val;
            list1 = list1->next;
        }
        else
        {
            ans->val = list2->val;
            list2 = list2->next;
        }
        while (list1->next != NULL || list2->next != NULL)
        {

            if (list1->val < list2->val)
            {
                // if (first == false)
                // {
                ListNode *node = new ListNode(list1->val);
                ans->next = node;
                ans = node;
                list1 = list1->next;
                // }
                // else
                // {
                //     ans->val = list1->val;
                //     first = false;
                // }
            }
            else
            {
                // if (first == false)
                // {
                ListNode *node = new ListNode(list2->val);
                ans->next = node;
                ans = node;
                list2 = list2->next;
                // }
                // else
                // {
                //     ans->val = list2->val;
                //     first = false;
                // }
            }
        }
        while (list1->next != NULL)
        {
            ListNode *node = new ListNode(list1->val);
            ans->next = node;
            ans = node;
            list1 = list1->next;
        }
        while (list2->next != NULL)
        {
            ListNode *node = new ListNode(list2->val);
            ans->next = node;
            ans = node;
            list2 = list2->next;
        }

        return head;
    }
};