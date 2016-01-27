// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 179. Largest Number
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

// 
// Given a list of non negative integers, arrange them such that they form the largest number. For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330. Note: The result may be very large, so you need to return a string instead of an integer. Credits: Special thanks to @ts for adding this problem and creating all test cases. Subscribe to see which companies asked this question Show Tags Sort
// 