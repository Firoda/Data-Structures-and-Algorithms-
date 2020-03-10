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

struct ListNode *NthNodeFromEnd(struct ListNode *head, int n)
{
	struct ListNode *temp, *temp2 = NULL;
	temp = head;
	for(int i=0;i<n;i++)
	{
		if(temp)
			temp = temp->next;
	}
	while(temp)
	{
		if(temp2 == NULL)
			temp2 = head;
		else
			temp2 = temp2->next;
		temp = temp->next;
	}
	if(temp2)
		return temp2;
	else
	{
		cout <<"Couldn't find that node";
		return NULL;
	}
}

int DoesLinkedListContainsLoop(struct ListNode *head)
{
	struct ListNode *slowptr = head, *fastptr = head;
	while(slowptr && fastptr && fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if(slowptr == fastptr)
			return 1;
		
	}
	
	return 0;
	
}

struct ListNode *FindBeginofLoop(struct ListNode *head)
{
	struct ListNode *slowptr = head, *fastptr = head;
	int loopexists = 0;
	while(slowptr && fastptr && fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if(slowptr == fastptr)
		{
			loopexists = 1;
			break;
		}
	}
	if(loopexists)
	{
		slowptr = head;
		while(fastptr != slowptr)
		{
			slowptr = slowptr->next;
			fastptr = fastptr->next;
		}
		return slowptr;
	}
	return NULL;
	
}

int FindLengthofLoop(struct ListNode *head)
{
	int length = 0;
	struct ListNode *slowptr = head, *fastptr = head;
	int loopexists = 0;
	while(slowptr && fastptr && fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if(slowptr == fastptr)
		{
			loopexists = 1;
			break;
		}
	}
	if(loopexists)
	{
		slowptr = head;
		while(fastptr != slowptr)
		{
			slowptr = slowptr->next;
			fastptr = fastptr->next;
		}
		
		do
		{
			length++;
			fastptr = fastptr->next; 
		}while(fastptr != slowptr);

		return length;
		
	}
	
	return 0;

	
}


// Reverse a linked list
struct ListNode *RecursiveReverse(struct ListNode *head)
{
	if(head == NULL)
		return NULL;
	if(head->next == NULL)
		return head;
	struct ListNode *secondEle, *temp2;
	secondEle->next = head->next;
	head->next = NULL;
	struct ListNode *reverseRest = RecursiveReverse(secondEle);
	secondEle->next = head;
	return reverseRest;
}


//Testing

void recursiveReverse(struct ListNode** head_ref) 
{ 
    struct ListNode* first; 
    struct ListNode* rest; 
       
    /* empty list */
    if (*head_ref == NULL) 
       return;    
  
    /* suppose first = {1, 2, 3}, rest = {2, 3} */
    first = *head_ref;   
    rest  = first->next; 
  
    /* List has only one node */
    if (rest == NULL) 
       return;    
  
    /* reverse the rest list and put the first element at the end */
    recursiveReverse(&rest); 
    first->next->next  = first;   
      
    /* tricky step -- see the diagram */
    first->next  = NULL;           
  
    /* fix the head pointer */
    *head_ref = rest;               
} 

// Print the Linked List
void Print(struct ListNode* head)
{
	struct ListNode *temp = head;
	while(temp)
	{
		cout << temp->data;
		cout << "\t";
	}
}



int main(){
	struct ListNode a;
	a.data = 3;
	a.next = NULL;
	struct ListNode *head = &a;
	struct ListNode **send = &head;
	InsertElement(send, 5,2);
	InsertElement(send, 6,3);
	InsertElement(send, 7,4);
	InsertElement(send, 8,5);
	InsertElement(send, 60,6);
	InsertElement(send, 64,7);
	InsertElement(send, 655,8);
	
	recursiveReverse(send);
	Print(head);
	
	return 0;	
}
