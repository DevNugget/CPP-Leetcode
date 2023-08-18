#include <string>
#include <iostream>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        int dec = 0;
        
        std::unordered_map<char, int> map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i = 0; i < s.length(); i++) {
            if (map[s[i]] >= map[s[i + 1]]) {
                dec += map[s[i]];
            } else {
                dec -= map[s[i]];
            }
        }
        return dec;
    }
};