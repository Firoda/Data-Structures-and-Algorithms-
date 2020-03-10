#include<iostream>
#include<cmath>
using namespace std;
bool check_AP(int a1, int a2, int a3)
{
	if(a2-a1 == a3-a2)
		return true;
	else
		return false;
}
int main()
{
	int a1,a2,a3,a4;
	int check_prog = 0;
	while(true)
	{
		cin >> a1 >> a2 >> a3;
		if(a1 == 0 && a2 == 0 && a3 == 0)
			return 0;
		if(check_AP(a1,a2,a3))
			check_prog = 1; // set it to 1 if AP else GP		
		if(check_prog)
			a4 = a3+(a3-a2);
		else
			{
				a4 = a3*(a3/a2);
			}
		if(check_prog == 1)
			cout << "AP "<<a4<<endl;
		else
			cout << "GP "<<a4<<endl;
	}
	return 0;
}
