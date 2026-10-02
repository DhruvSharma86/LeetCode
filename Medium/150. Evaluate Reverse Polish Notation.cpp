//Inbuilt Stack 
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i].length() == 1 && !isdigit(tokens[i][0])) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                switch (tokens[i][0]) {
                    case '+': st.push(a + b); break;
                    case '-': st.push(a - b); break;
                    case '*': st.push(a * b); break;
                    case '/': st.push(a / b); break;
                }
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        
        return st.top(); 
    }
};


// Creating Array of max comstraint
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int st[10000];
        int top = 0;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i].length() == 1 && !isdigit(tokens[i][0])) {
                int b = st[--top];
                int a = st[--top];
                
                switch (tokens[i][0]) {
                    case '+': st[top++] = a + b; break;
                    case '-': st[top++] = a - b; break;
                    case '*': st[top++] = a * b; break;
                    case '/': st[top++] = a / b; break;
                }
            } else {
                st[top++] = stoi(tokens[i]);
            }
        }
        
        return st[0]; 
    }
};