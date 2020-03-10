#include<iostream>
#include<stack>
using namespace std;
class Queue{
	public:
		stack<int> s1,s2;
		void enqueue(int x)
		{
			s1.push(x);
		}
		int dequeue()
		{
			if(s1.empty() && s2.empty())
				return -1;
			if(s2.empty())
			{
				while(!s1.empty())
				{
					s2.push(s1.top());
					s1.pop();
				}
				int temp = s2.top();
				s2.pop();
				return temp;
			}
		}
};

int main()
{
	Queue q1;
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	cout << q1.dequeue()<<endl;
	return 0;
}
