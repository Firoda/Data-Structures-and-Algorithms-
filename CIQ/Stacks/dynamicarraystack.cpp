#include<iostream>
#include<stdlib.h>
using namespace std;
struct DynArrayStack{
	int top;
	int capacity;
	int *array;
};

struct DynArrayStack *CreateStack(){
	struct DynArrayStack *S = (struct DynArrayStack *)malloc(sizeof(struct DynArrayStack));
	if(!S)
		return NULL;
	S->capacity = 1;
	S->top = -1;
	S->array = (int *)malloc(S->capacity * sizeof(int));
	if(!S->array)
		return NULL;
	return S;
}

int IsFullStack(struct DynArrayStack *S)
{
	return (S->top == S->capacity-1);
}
void DoubleStack(struct DynArrayStack *S)
{
	S->capacity *= 2;
	S->array = (int *)realloc(S->array, S->capacity*sizeof(int));
}
void Push(struct DynArrayStack *S, int data)
{
	if(IsFullStack(S))
		DoubleStack(S);
	S->array[S->top++] = data;
}
int main()
{
	struct DynArrayStack *Q = CreateStack();
	Push(Q, 4);
	Push(Q, 5);
//	Push(Q, 6);
//	Push(Q, 6);
//	Push(Q, 6);
	return 0; 
}
