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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
        ListNode ans(0);
        ListNode* n = &ans;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry > 0)
        {
            if(l1 != nullptr)
            {
                carry += l1 -> val;
                l1 = l1 -> next;
            }

            if(l2 != nullptr)
            {
                carry += l2 -> val;
                l2 = l2 -> next;
            }

            n->next = new ListNode(carry % 10);
            carry /= 10;
            n = n -> next;
        }
        
        return ans.next;
}