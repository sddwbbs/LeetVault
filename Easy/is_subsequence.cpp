class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == "") return true;
        if (t == "") return false;

        stack<char> st;
        st.push('_');

        for (auto ch : s) {
            st.push(ch);
        }

        for (int i = t.length() - 1; i >= 0; --i) {
            if (t[i] == st.top() && !st.top() != '_') st.pop();
        }

        return (st.top() == '_');
    }
};

