class Solution {
public:
    char findTheDifference(std::string& s, std::string& t) {
        // Intuition: char range is fixed to lowercase letters, use frequency array instead of hashmap
        std::vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : t) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0) return c;
        }
        return 'a';
    }
};