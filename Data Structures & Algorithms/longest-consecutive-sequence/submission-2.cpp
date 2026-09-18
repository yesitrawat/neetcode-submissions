class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sp;
        for (int x : nums) {
            sp.insert(x);
        }

        int ans = 0;

        for (int x : sp) {
            if (sp.find(x - 1) == sp.end()) {
                int current = x;
                int count = 1;

                while (sp.find(current + 1) != sp.end()) {
                    current++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};
