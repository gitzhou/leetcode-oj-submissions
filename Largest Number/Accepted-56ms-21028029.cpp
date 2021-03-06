// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Largest Number
// https://leetcode.com/problems/largest-number/
// 

class Comparator {
public:
    bool operator ()(int lhs, int rhs) const {
        long long ab = combineInt(lhs, rhs);
        long long ba = combineInt(rhs, lhs);
        return ab > ba;
    }
    
private:
    long long combineInt(int first, int second) const {
        stringstream ss;
        ss << first << second;
        long long value;
        ss >> value;
        return value;
    }
};

class Solution {
public:
    string largestNumber(vector<int> &num) {
        sort(num.begin(), num.end(), Comparator());
        string value;
        for (int i = 0; i < num.size(); ++i) {
            if (value == "" && num[i] == 0) {
                continue;
            }
            value += intToString(num[i]);
        }
        if (value == "") {
            value = "0";
        }
        return value;
    }
    
private:
    inline string intToString(int n) {
        stringstream ss;
        ss << n;
        return ss.str();
    }
};

