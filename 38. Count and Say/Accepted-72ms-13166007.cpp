// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 38. Count and Say
// https://leetcode.com/problems/count-and-say/
// 

class Solution {
public:
    Solution() {
        sequence.push_back("1");
    }
    
    string countAndSay(int n) {
        if (n > sequence.size()) {
            size_t i = sequence.size();
            string s = sequence[i - 1], sread;
            while (i < n) {
                char ch = s[0];
                int count = 1;
                for (int j = 1; j < s.length(); ++j) {
                    if (s[j] == s[j - 1]) {
                        ++count;
                    } else {
                        sread = sread + intToString(count) + ch;
                        ch = s[j];
                        count = 1;
                    }
                }
                sread = sread + intToString(count) + ch;
                sequence.push_back(sread);
                s = sread;
                sread = "";
                ++i;
            }
        }
        return sequence[n - 1];
    }
    
private:
    string intToString(int i) {
        stringstream ss;
        ss << i;
        string s;
        ss >> s;
        return s;
    }
    
private:
    vector<string> sequence;
};

// 
// The count-and-say sequence is the sequence of integers beginning as follows: 1, 11, 21, 1211, 111221, ... 1 is read off as "one 1" or 11. 11 is read off as "two 1s" or 21. 21 is read off as "one 2, then one 1" or 1211. Given an integer n, generate the nth sequence. Note: The sequence of integers will be represented as a string. Subscribe to see which companies asked this question Show Tags String Show Similar Problems (M) Encode and Decode Strings
// 