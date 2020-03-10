#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int img;
	public:
		Complex(int a=0, int b =0)
		{
			real = a;
			img = b;
		}
		Complex operator + (Complex const &a)
		{
			Complex res;
			res.real = real + a.real;
			res.img  = img + a.img;
			return res;
		}
		void print()
		{
			cout << this->real << "+i"<<this->img << endl;
		}
};

int main()
{
	Complex c1(10, 5), c2(6, 3);
	Complex c3 = c1 + c2;
	c3.print();
	return 0;
}
