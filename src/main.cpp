// https://leetcode.com/problems/rotate-list/

#include<iostream>
#include"../inc/solution.hpp"


// prints data of all nodes linked to the passed head
void PrintData(ListNode* head)
{
	ListNode* p{head};
	if(p == nullptr){ std::cout << "No nodes are linked.\n"; }
	while(p != nullptr)
	{
		std::cout << p->val;
		p = p->next;
	}
}

int main()
{
	ListNode n5(5);
	ListNode n4(4, &n5);
	ListNode n3(3, &n4);
	ListNode n2(2, &n3);
	ListNode n1(1, &n2); // head node of linked list

	Solution sol{};
	PrintData( sol.rotateRight(&n1,6) );
	
	return 0;
}

