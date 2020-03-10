#include<iostream>
#include<stack>
using namespace std;
struct Queue{
	stack<int> s1;
	void enqueue(int x)
	{
		s1.push(x);
	}
	int dequeue()
	{
		if(s1.empty())
			return -1;
			
		int x = s1.top();
		s1.pop();
		
		if(s1.empty())
			return x;
		int item = dequeue();
		s1.push(x);
		
		return item;
	}
};

int main()
{
	Queue q1;
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	
	return 0;
}
