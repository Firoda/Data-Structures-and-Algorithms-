#include<iostream>
#include<stdlib.h>
#define MAXSKIPLEVEL 5
using namespace std;

struct ListNode {
	int data;
	struct ListNode *next[1];
};

struct SkipList {
	struct ListNode *header;
	int listLevel; // Current level of the list
};

struct SkipList list;

struct ListNode *insertElement(int data){
	int i, int newLevel;
	struct ListNode *update[MAXSKIPLEVEL + 1];
	struct ListNode *temp;
	temp = list.header;
}
