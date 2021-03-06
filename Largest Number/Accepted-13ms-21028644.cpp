// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Largest Number
// https://leetcode.com/problems/largest-number/
// 

class Solution {
public:
    string largestNumber(vector<int> &num) {
        vector<string> numstrs(num.size());
        for (int i = 0; i < num.size(); ++i) {
            numstrs[i] = to_string(num[i]);
        }
        sort(numstrs.begin(), numstrs.end(), comparator);
        if (numstrs[0] == "0") {
            return "0";
        }
        stringstream ss;
        for (int i = 0; i < numstrs.size(); ++i) {
            ss << numstrs[i];
        }
        return ss.str();
    }
    
private:
    static bool comparator(const string &lhs, const string &rhs) {
        return (lhs + rhs) > (rhs + lhs);
    }
};

