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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
	ListNode* i = l1; ListNode* j = l2;
	ListNode* l3;
	l3=new ListNode(0);
	ListNode* k = l3;
	int temp = 0;
	while (i != NULL && j != NULL) {
		int v = i->val + j->val+temp;
		if (v < 10) {
			k->val = v;
			temp = 0;
		}
		else {
			k->val = (v) % 10;
			temp = 1;
		}
		i = i->next; j = j->next;
        if(i != NULL && j != NULL){
            k->next=new ListNode(0);
			k = k->next;
        }
	}
	if (i == NULL && j == NULL) { 
        if(temp==1){
            k->next=new ListNode(1);
			k = k->next;
        }
        return l3;
    }
	else if(i==NULL){
        k->next=new ListNode(0);
		k = k->next;
		while (j != NULL) {
			int v = j->val+temp;
			if (v < 10) {
				k->val = v;
				temp = 0;
			}
			else {
				k->val = (v) % 10;
				temp = 1;
			}
			j = j->next;
            if(j != NULL){
            k->next=new ListNode(0);
			k = k->next;
            }
		}
        if(temp==1){
            k->next=new ListNode(1);
			k = k->next;
        }
		return l3;
	}
	else if (j==NULL) {
        k->next=new ListNode(0);
		k = k->next;
		while (i != NULL) {
			int v = i->val+temp;
			if (v < 10) {
				k->val = v;
				temp = 0;
			}
			else {
				k->val = (v) % 10;
				temp = 1;
			}
			i = i->next;
            if(i != NULL){
            k->next=new ListNode(0);
			k = k->next;
            }
		}
        if(temp==1){
            k->next=new ListNode(1);
			k = k->next;
        }
		return l3;
	}
return l3;
}       
};
