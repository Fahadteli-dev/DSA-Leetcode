class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '{' || c == '(' || c == '[') {
                st.push(c);
            } 
            // If it's a closing bracket, check for validity
            else {
                // Found closing bracket but stack is empty -> invalid
                if (st.empty()) return false; 
                
                // Pop and verify matching pair
                char top = st.top();
                if ((c == ')' && top == '(') || 
                    (c == ']' && top == '[') || 
                    (c == '}' && top == '{')) {
                    st.pop();
                } else {
                    // Mismatched bracket found -> invalid
                    return false; 
                }
            }
        }
        // If stack is empty, all brackets were matched correctly
        return st.empty();
    }
};
