#include<iostream>
using namespace std;

struct DLLNode{
	int data;
	struct DLLNode *next;
	struct DLLNode *prev;
};

void DLLInsert(struct DLLNode **head, int data, int position)
{
	int k=1;
	struct DLLNode *temp, *newNode;
	newNode = new struct DLLNode;
	// BS about newNode returning NULL ommitted;
	newNode->data = data;
	if(position == 1)
	{
		newNode->next = *head;
		newNode->prev = NULL;
		if(*head)
		{
			(*head)->prev = newNode;
		}
		*head = newNode;
		cout <<"Inserted successfully";
		return;
	}
	else
	{
		temp = *head;
		while((k<position) && (temp!=NULL))
		{
			k++;
			temp = temp->next;
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		if(temp->next)
			temp->next->prev = newNode;
		temp->next = newNode;
		cout <<"Inserted Successfully";
		return;
	}
}

void DLLDelete(struct DLLNode **head,int position)
{
	int k = 1;
	struct DLLNode *temp, *temp2;
	temp = *head;
	if(*head == NULL)
	{
		cout << "List is empty";
		return;
	}
	if(position == 1)
	{
		(*head) = (*head)->next;
		if(*head != NULL)
			(*head)->prev = NULL;
		delete temp;
		cout << "Deleted the Node";
		return;
	}
	else
	{
		while((temp!= NULL)&&(k<position))
		{
			k++;
			temp = temp->next;
		}
		if(k!=position-1)
			cout <<"Postion does not exist";
		temp2 = temp->prev;
		temp2->next = temp->next;
		if(temp->next)
			temp->next->prev = temp2;
		delete temp;
		cout << "Deleted the Node";
		return;
	}
	
}


int main()
{
	struct DLLNode a;
	/* 
		Here a.data is used instead of a->data because that is used when assigning value for pointer to the object 
		but in this case the object itself is used so a.data is correct.
	*/
	a.data = 45;
	a.next = NULL;
	struct DLLNode *head = &a;
	struct DLLNode **send = &head;
	DLLInsert(send, 67, 1);
	cout << "\n";
	DLLInsert(send,56, 2);
	cout << "\n";
	DLLDelete(send,1);
	
	return 0;
}
