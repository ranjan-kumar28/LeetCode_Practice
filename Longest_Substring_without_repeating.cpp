class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    // unordered_map<char, int> map;
    int map[256] = {0}; 
    int m = 0;
    for(int i = 0, j = 0; j < s.length(); j++){
        map[s[j]]++;
        while(map[s[j]] > 1){
            map[s[i]]--;
            i++;
        }
        m = max(m, j - i + 1);
    }
    return m;
    }
};
