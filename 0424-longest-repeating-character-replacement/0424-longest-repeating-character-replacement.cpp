class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size() == 0) return 0;
        vector <int> arr(128);
        int start = 0;
        int largest = 0;
        for (int end = 0; end < s.size(); end++) {
            largest = max(largest, ++arr[s[end]]);
            if (end - start + 1 - largest > k)       
                arr[s[start++]]--;
        }
        if(largest+k>s.size()) return s.size();
        return largest+k;
    }
};