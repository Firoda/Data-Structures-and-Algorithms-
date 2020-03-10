#include<iostream>
using namespace std;

struct ListNode {
	int data; 
	struct ListNode *next;
};
// Length of linked list
int ListLength(struct ListNode *head)
{
	struct ListNode *current = head;
	int count = 0;
	while(current!=NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}


//Inserting a Node in the linked list

void InsertElement(struct ListNode **head, int data, int position)
{
	int k=1;
	struct ListNode *p, *q, *newNode;
	newNode = new struct ListNode();
	if(newNode==NULL)
		{
			return;
		}
	newNode->data = data;
	p = *head;
	if(position == 1)
	{
		newNode->next = p;
		*head = newNode;
	}
	else
	{
		while((p!=NULL)&&(k<position))
		{
			k++;
			q = p;
			p = p->next;
		}
		q->next = newNode;
		newNode->next = p;
	}
}
//Deleting a node at any position
void DeleteNode(struct ListNode **head, int position)
{
	int k = 1;
	struct ListNode *p, *q;
	if(*head == NULL)
	{
		return;
	}
	p = *head;
	if(position == 1)
	{
		(*head) = (*head)->next;
		free(p);
		return;
	}
	else
	{
		q = p;
		while((p!=NULL)&&(k<position))
		{
			k++;
			q = p;
			p = p->next;
		}
		if(p==NULL)
		{
			printf("Position does not exist");
			return;
		}
		else
		{
			q->next = p->next;
			delete p;
			return;
		}
		
	}
	
}


//Deleting the whole linked list
void DeleteLinkedList(struct ListNode **head)
{
	struct ListNode *temp = *head;
	while(head)
	{
		temp = *head;
		(*head)= (*head)->next;
		delete temp;
	}
	
}

int main(){
	struct ListNode a;
	a.data = 3;
	a.next = NULL;
	struct ListNode *head = &a;
	struct ListNode **send = &head;
	InsertElement(send, 5,2);

	
	return 0;	
}
