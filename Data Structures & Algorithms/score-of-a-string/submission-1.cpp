class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int ss=0;
        for(int i = 1 ; i<n ; i++){
           ss+=abs(s[i-1]-s[i]);
        }
        return ss;
    }
};