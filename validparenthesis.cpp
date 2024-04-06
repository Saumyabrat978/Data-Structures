#include<stack>
bool isValidParenthesis(string s)

{
    // Write your code here.
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty()) {
            st.push(s[i]);
        }
        else if ((st.top() == '(' && s[i] == ')')
                 || (st.top() == '{' && s[i] == '}')
                 || (st.top() == '[' && s[i] == ']')){
             
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }
    if (st.empty()) {
        return true;
    }
    return false;
}