class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char it : s) {
            switch(it) {
                case ')':
                    if(st.empty() || st.top() != '(') return false;
                    st.pop();
                    break;
                case '}':
                    if(st.empty() || st.top() != '{') return false;
                    st.pop();
                    break;
                case ']':
                    if(st.empty() || st.top() != '[') return false;
                    st.pop();
                    break;
                default:
                    st.push(it);
                    break;
            }
        }
        return st.empty();
    }
};
