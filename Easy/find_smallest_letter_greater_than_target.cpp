class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (auto simb : letters) {
            if (simb > target) {
                return simb;
            }
        }

        return letters[0];
    }
};
