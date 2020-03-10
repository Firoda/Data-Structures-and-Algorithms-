#include<iostream>
using namespace std;

class Shape{
	protected:
		int height, width;
	public:
		Shape(int a, int b)
		{
			height = a;
			width = b;
		}
		virtual int area()=0;
};

class Rectangle: public Shape{
	public:
		Rectangle(int a=0, int b=0):Shape(a,b){ }
			
	int area(){
		cout << "Rectangle class ";
		cout << height*width<<endl;
	}
};

class Square:public Rectangle{
	public:
		Square(int a=2, int b=0):Rectangle(a, b){ }
		
	int area(){
		cout << "Square class ";
		cout <<height*height<<endl;
	}
};

int main()
{
	Square sq;
//	Rectangle rec;
	Shape *sh,*qw;
	sh = &sq;
//	qw = &rec;
//	qw->area();
	cout << endl;
	sh->area();
//	sq.area();
	return 0;
}


