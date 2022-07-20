#include"../inc/solution.hpp"


ListNode* Solution::rotateRight(ListNode* head, int k)
{
    if(!head || !head->next){ return head; }  // handle the empty list / single node cases

    ListNode* follower{head}, * leader{head};
    for(int j{0}; j<k; ++j)
    { 
        (leader->next) ? leader = leader->next : leader = head; 
    }  // leader is k (modulo size of list) nodes ahead of follower

    // traverse list until leader points to tail node, maintaining separation between follower and leader
    while(leader->next){ leader = leader->next; follower = follower->next; }

    leader->next = head;  // tail node points to current head, linked list is now circular
    head = follower->next;  // follower points to new tail node, head points to node after
    follower->next = nullptr;  // new tail node points to nullptr, breaking the cycle

    return head;
}