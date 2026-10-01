class Solution {
    public:
    
    bool isValid(string s) {
        stack <char> st;

        if (s[0] == ')' || s[0] == '}' || s[0] == ']'){
            return false;
        }
        if (s[s.length() - 1] == '(' || s[s.length() - 1] == '{' || s[s.length() - 1] == '['){
            return false;
        }
 
        for(int i = 0; i < s.length(); i++){
         char current = s[i];
        if(current == '(' || current == '[' || current == '{'){
            st.push(current);
        }
        else if (current == ')'){
            if(st.empty() || st.top() != '('){
                return false;
            }
            st.pop();
            }
        else if (current == '}'){
            if(st.empty() || st.top() != '{'){
                return false;
            }
            st.pop();
        }
        else if (current == ']'){
            if(st.empty() || st.top() != '['){
                return false;
            }
            st.pop();
        }
        }
        return st.empty();
    }
};