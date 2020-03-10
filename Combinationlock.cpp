#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int intial[5],finalq[5];
    for(int i=0;i<5;i++)
    {
        cin >> intial[i];
    }
    for(int i=0;i<5;i++)
    {
        cin >>finalq[i];
    }
    int total_steps = 0;
    for(int i=0;i<5;i++)
    {
        if(intial[i] != finalq[i])
        {
           int diff = intial[i]-finalq[i];
           int q = 10-diff;
            if(diff>=q)
                total_steps+=q;
            else
                total_steps+=diff;
        }
    }
    cout << total_steps;
    return 0;
}

