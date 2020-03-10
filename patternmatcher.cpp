#include <iostream>
#include <stack>
using namespace std;
void follPatt(string s)
{
   
   int count = 0;
   for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'x')
            count++;
        if(s[i] == 'y')
            count--;
        if(s[i] == 'y' && s[i+1] == 'x')
            if(count!=0)
                break;
    }
   if(count == 0)
    cout << 1 << endl;
   else
    cout << 0 << endl;
  }

int main()
{
	string a = "xxyy";
	string b = "xyxyx";
	follPatt(b);
	return 0;
}
