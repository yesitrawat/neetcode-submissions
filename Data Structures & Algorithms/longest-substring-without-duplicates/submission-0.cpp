class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sp;
        int n = s.length();
        int i = 0 , j = 0;
        int c = 0;
        while(j<n){
            while(sp.find(s[j])!=sp.end()){
                sp.erase(s[i]);
                i++;
            }
            sp.insert(s[j]);
            c = max(c,j-i+1);
            j++;
        }
        return c ; 
    }
};
