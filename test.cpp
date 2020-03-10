#include <iostream>
using namespace std;
 
int main() {
   int number1 = 88, number2 = 22;
 
   // Create a pointer pointing to number1
   int * pNumber1 = &number1;  // Explicit referencing
   *pNumber1 = 99; 
   cout << number1<<endl;
   int & refNumber1 = number1;
   cout << refNumber1<<endl;
   refNumber1 = 11;             // Implicit dereferencing (NOT *refNumber1)
   cout << refNumber1 << endl; 
   int arr[2][2] = {0};
   for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
		cout << arr[i][j]<<endl;
   
	return 0;
}
