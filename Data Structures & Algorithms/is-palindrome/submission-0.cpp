class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (j > i) {
            if (!isalnum(s[i])) {
                i++;
                continue;
            }
            if (!isalnum(s[j])) {
                j--;
                continue;
            }
            if (tolower(s[i]) == tolower(s[j])) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};
