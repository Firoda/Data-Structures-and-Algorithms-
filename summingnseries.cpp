#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test;
    unsigned long long int a;
    cin >> test;
    while(test --> 0)
    {
        cin >> a;
        unsigned long long int b = (a%(1000000000+7));
        unsigned long long int c = (b * b)%(1000000000+7);
        cout << c <<"\n";
    }
    return 0;
}
// (a%(pow(10,9)+7))
