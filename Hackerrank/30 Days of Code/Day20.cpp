#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, temp;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
	
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int num = 0;
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            num++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (num == 0) {
        break;
    }
}
 
    cout << "Array is sorted in "  << num << " swaps."<<"\n";
    cout << "First Element: "<< a[0]<<"\n";
    cout << "Last Element: "<< a[n-1] << "\n";
    
    return 0;
}
