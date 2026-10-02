// Using Stack
class Solution {
public:
    int longestValidParentheses(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<int> st;
        st.push(-1);
        int max = 0;

        for (int i = 0; i < s.length(); i++){
            if(s[i] == '(') {st.push(i);}
            else{
                st.pop();
                if(st.empty()){st.push(i);}
                else{
                    int currlen = i - st.top();
                    if(currlen > max){max = currlen;}
                }
            }
        }
    return max;
    }

};

// Using Pass method
class Solution {
public:
    int longestValidParentheses(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int left = 0, right = 0, max_len = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                max_len = max(max_len, 2 * right);
            } else if (right > left) {
                left = right = 0;
            }
        }

        left = right = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                max_len = max(max_len, 2 * left);
            } else if (left > right) {
                left = right = 0;
            }
        }

        return max_len;
    }
};