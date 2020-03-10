#include<iostream>
#include<fstream>
using namespace std;

void towerofhanoi(int n, int from, int to, int aux,long long &moves)
{
    if(n==1)
    {
        cout <<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return;
    }
    towerofhanoi(n-1,from, aux, to,moves);
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    moves++;
    towerofhanoi(n-1,aux,to,from, moves);
    moves++;
}

int main()
 {
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    long long moves = 0;
	    towerofhanoi(n,1,2,3,moves);
	    cout << moves+1 << endl;
	}
	return 0;
}
