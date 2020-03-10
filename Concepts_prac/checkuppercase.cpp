#include<iostream>
using namespace std;
int main() {
   char ch;
   cout <<"\nEnter The Character : ";
   cin >>ch;

   if (ch >= 65 && ch <= 90)
      cout << "Character is Upper Case Letters";
   else
    	cout << "Character is Not Upper Case Letters";

   return (0);
}
