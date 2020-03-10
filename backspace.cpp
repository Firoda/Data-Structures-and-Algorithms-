class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int s_l = S.length()-1;
        int t_l = T.length()-1;
        
        string res_s = "";
        string res_tt = "";
        int s_hash = 0;
        int t_hash = 0;
        
        while(s_l>=0)
        {
            if(S[s_l] == '#')
            {
                while(s_l>=0 && S[s_l] == '#')
                {
                    s_hash++;
                    s_l--;
                }
                while(s_hash>0 && s_l>=0)
                {
                    if(S[s_l] == '#')
                    {
                        s_hash++;
                        s_l--;
                    }
                    else
                    {
                        s_hash--;
                        s_l--;    
                    }
                    
                }
            }
            else 
            {
                
                res_s+=S[s_l];
                s_l--;
            }  
        }
        
        
        
        // For T String
        while(t_l>=0)
        {
            if(T[t_l] == '#')
            {
                while(t_l>=0 && T[t_l] == '#')
                {
                    t_hash++;
                    t_l--;
                }
                while(t_hash>0 && t_l>=0)
                {
                    if(T[t_l] == '#')
                    {
                        t_hash++;
                        t_l--;
                    }
                    else
                    {
                        t_hash--;
                        t_l--;
                    }
                    
                }
                
            }
            else 
            {
                
                    res_tt+=T[t_l];
                t_l--;
            }  
        }
        cout << res_s<<" \n\n\n"<<res_tt<<endl;
        if(res_tt.compare(res_s) == 0)
            return true;
        return false;
        
        
    }
};

string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        string S = stringToString(line);
        getline(cin, line);
        string T = stringToString(line);
        
        bool ret = Solution().backspaceCompare(S, T);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}
