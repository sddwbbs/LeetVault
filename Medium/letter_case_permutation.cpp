class Solution {
public:
    void solution(string s, vector<string>&ans, int i) {
        if (i == s.length()) {
            ans.push_back(s);
            return;
        } 

        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            solution(s, ans, i + 1);
            s[i] = tolower(s[i]);
            solution(s, ans, i + 1);
        } else {
            solution(s, ans, i + 1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        solution(s, ans, 0);
        return ans;
    }
};

