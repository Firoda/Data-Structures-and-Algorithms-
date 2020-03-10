// you can use includes, for example:
#include <algorithm>
#include <bits/stdc++.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(string &riddle) {
    // write your code in C++14 (g++ 6.2.0)
    bool arr[26] = {true};
    int len = riddle.length();
    for(int i=0;i<len;i++)
    {
        if(riddle[i] == '?')
        {
            if(i == 0)
            {
                char c = riddle[i+1];
                
                arr[c-'a'] = false;
                // Putting valid char
                for(int j=0;j<26;j++)
                {
                    if(arr[j] == true)
                    {
                        char d = 'a' + j;
                        riddle[i] = d;
                    }
                }
                arr[c - 'a'] = true;
            }
            else if(i == len - 1)
            {
                char c = riddle[i-1];
                arr[c - 'a'] = false;
                for(int j=0;j<26;j++)
                {
                    if(arr[j] == true)
                    {
                        char d = 'a'+j;
                        //cout << d << endl;
                        riddle[i] = d;
                       // cout << riddle << endl;
                    }
                }
                arr[c - 'a'] = false;
                
            }
            else
            {
                char c1 = riddle[i-1];
                char c2 = riddle[i+1];
                //cout << c1 <<" "<<c2 << endl;
                arr[c1 - 'a'] = false;
                if(c2 != '?'){
                    arr[c2 - 'a'] = false;
                }
                
                for(int j=0;j<26;j++)
                {
                    if(arr[j] == true)
                    {
                        char d = 'a' + j;
                        cout << d << endl;
                        riddle[i] = d;
                    }
                }
                
                arr[c1 - 'a'] = true;
                if(c2 != '?')
                    arr[c2 - 'a'] = true;
                
            }
        }
    }
    
    
    return riddle;
}

