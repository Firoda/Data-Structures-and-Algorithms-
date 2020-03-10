#include<iostream>
using namespace std;

void TowerofHanoi(int n, char source, char destination, char auxillary)
{
	if(n == 1)
	{	
		cout << "Move disk 1 from " <<source <<" to " <<destination<<"\n";
		return;
	}
	
	TowerofHanoi(n-1,source, auxillary, destination);
	cout << "Move disk "<<n<<" from "<<source<<" to "<<destination<<"\n";
	TowerofHanoi(n-1, auxillary, destination, source);
	
} 

void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}
	TowerOfHanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	TowerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}


int main()
{
	char s = 'S';
	char a = 'A';
	char d = 'D';
	TowerofHanoi(3,s,a,d);
	return 0;
}
