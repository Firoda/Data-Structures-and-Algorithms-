#include <iostream>
#include<vector>

std::vector<int> digitize(int n=35231) 
{   
  int k;
  std::vector<int> num;
  while(n>0)
  {
    num.push_back(n%10);
    n = n/10;
  }
  std::reverse(num.end(),num.begin());
  return num;
}

int main()
{
	cout << digitize();
	return 0;
}
