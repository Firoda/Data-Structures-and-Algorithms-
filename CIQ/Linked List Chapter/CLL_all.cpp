#include<iostream>
using namespace std;

struct CLLNode {
	int data;
	struct CLLNode *next;
};

void InsertAtEndInCLL(struct CLLNode **head, int data)
{
	struct CLLNode *temp, *temp2;
	CLLNode newNode = new struct CLLNode;
	newNode->data = data;
	//newNode->next = newNode;
	while(current->next !=head)
		current = current->next;
	
	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = head;
		current->next = newNode;
	}
	cout << "Inserted Successfully";	
}

void InsertAtBeginInCLL(struct CLLNode **head, int data)
{
	struct CLLNode *temp, *temp2;
	CLLNode newNode= new struct CLLNode;
	newNode->data = data;
	while(temp->next!=head)
		temp = temp->next;
		
	//Code wrong in the book
	temp->next = newNode;
	newNode->next = (*head)->next;
	(*head) = newNode;
	cout << "Node Inserted";
	return;
}


void DeleteLastNodeFromCLL(struct CLLNode **head)
{
	struct CLLNode *temp, *temp2;
	temp = *head;
	temp2 = *head;
	while(current->next!= head)
	{
		temp = current;
		current = current->next;
	}
	temp->next = current->next;
	delete current;
	cout << "Deleted the Last Node";
	return;
}

int CircularListLength(struct CLLNode *head)
{
	int k=1;
	struct CLLNode *current = head;
	if(current == NULL)
	{
		cout << "List is empty";
		return
	}
	do
	{
		current = current->next;
		k++;	
	}while(current != head)
	return k;
}
void PrintCircularListData(struct CLLNode *head)
{
	struct CLLNode *current = head;
	if(head == NULL)
	{
		cout <<"List is empty";
		return;	
	}
	else
	{
		do
		{
			cout << current->data;
			cout << "\n";
			current = current->next;
		}while(current != head)
		return;
	}
}



int main()
{
	CLLNode a = new struct CLLNode;
	a->data = 45;
	a->next = NULL;
	
	
	return 0;
}
