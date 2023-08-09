class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if (s == t) return true;
        stack<char> s1, t1; 

        for (auto i : s) {
            if (i == '#') {
                if (!s1.empty()) s1.pop();
            } else {
                s1.push(i);
            }
        }

        for (auto i : t) {
            if (i == '#') {
                if (!t1.empty()) t1.pop();
            } else {
                t1.push(i);
            }
        }

        return s1 == t1;
    }

};
