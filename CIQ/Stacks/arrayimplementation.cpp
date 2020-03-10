#include<iostream>
#define MAXSIZE 10
using namespace std;
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};

struct ArrayStack *CreateStack(){
	struct ArrayStack *S = new struct ArrayStack();
	if(!S)
		return NULL;
	S->capacity = MAXSIZE;
	S->top = -1;
	S->array = new int[MAXSIZE];
}
int IsEmptyStack(struct ArrayStack *S)
{
	return(S->top == -1);
}
int IsFullStack(struct ArrayStack *S)
{
	return(S->top == S->capacity-1);
}
void Push(struct ArrayStack *S, int data)
{
	if(IsFullStack(S))
		cout << "Stack Overflow";
	else
		S->array[S->top++] = data;
}
int Pop(struct ArrayStack *S)
{
	if(IsEmptyStack(S))
	{
		cout << "Stack Underflow";
		return INT_MIN; }
	else
		return(S->array[S->top--]);
}
void DeleteStack(struct ArrayStack *S)
{
	if(S)
		{
// Suffers from memory leak check later
//			if(S->array)
//				free(S->array);
			free(S);
			cout <<"\nDone";
		}
}
int PrintTopStack(struct ArrayStack *S)
{
	if(IsEmptyStack(S))
		cout << "Nothing to display stack is empty";
	else
		cout << "\n" << S->array[S->top-1];
}

int main()
{
	struct ArrayStack *A = CreateStack();
	Push(A, 4);
	PrintTopStack(A);
	Pop(A);
	PrintTopStack(A);
	DeleteStack(A);
	return 0;
	
}
