/*struct Node * XOR(struct Node *a, struct Node *b)
{
	return (struct Node *)((unintptr_t)(a) ^ (unintprt_t)(b));
}*/

#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    string s;
	    cin >> s;
	    stack<char> st;
	    int flag = 1;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i] == '{' || s[i] == '[' || s[i]  == '(')
	        { 
	            st.push(s[i]);
	            continue;
	        }
	        if(st.empty())
	        {
	            flag = 0;
	            break;
	        }
	        //cout << s[i] << endl;
	        if(s[i] == '}' || s[i] == ']' || s[i] == ')')
	        {
                if((s[i] == '}' && st.top() == '{')
                    || (s[i] == ']' && st.top() == '[')
                    || (s[i] == ')' && st.top() == '('))
                   {st.pop();
				   //cout << "Doing the if";
				   }
                else
                {
                    flag = 0;
                    break;
                }
	        }
	    }
	    //cout << st.size() << endl;
	    //cout << st.top() << endl;
	    if(st.empty() && flag == 1)
	        cout << "balanced" << endl;
	    else
	        cout << "not balanced" << endl;
	    
	}
	return 0;
}
