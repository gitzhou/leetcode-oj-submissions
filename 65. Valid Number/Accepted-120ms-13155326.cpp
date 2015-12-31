// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 65. Valid Number
// https://leetcode.com/problems/valid-number/
// 

class Solution {
public:
    bool isNumber(const char *s) {
        if (s == NULL) {
            return false;
        }
        string str(s);
        size_t epos =str.find_first_of("Ee");
        if (epos != string::npos) {
            // 当输入只有E或者e时，需加判断
            return (epos != 0) && isValid(str.substr(0, epos), true, false, true) &&
            (epos + 1 < str.length()) && isValid(str.substr(epos + 1), false, true, false);
        }
        return isValid(str);
    }
    
private:
    bool isValid(const string &str, bool canFrontBlank = true,
                 bool canBackBlank = true, bool canDot = true) {
        size_t start = str.find_first_not_of(" "), end = str.find_last_not_of(" ");
        if (start == string::npos) {
            return false; // 全是空格
        }
        if ((!canFrontBlank && start != 0) || // 不可以有前导空格但是存在前导空格
            (!canBackBlank && end != str.length() - 1)) { // 字符串末尾不可以有空格但是存在末尾空格
            return false;
        }
        bool dotShown = false; // 小数点是否出现过
        bool digitShown = false; // 数字是否出现
        if (!isdigit(str.at(start)) && str.at(start) != '+' && str.at(start) != '-' && str.at(start) != '.') {
            return false; // 第一个字符不为数字且不为+和-
        }
        if (str.at(start) == '.') {
            dotShown = true;
        }
        if (str.at(start) == '+' || str.at(start) == '-' || str.at(start) == '.') {
            ++start;
        }
        for (size_t i = start; i <= end; ++i) {
            if ((!isdigit(str.at(i)) && str.at(i) != '.') ||
                (str.at(i) == '.' && dotShown)) {
                return false;
            }
            if (str.at(i) == '.') {
                dotShown = true;
            }
            if (isdigit(str.at(i))) {
                digitShown = true;
            }
        }
        if (!digitShown || (!canDot && dotShown)) {
            return false;
        }
        return true;
    }
};

// 
// Validate if a given string is numeric. Some examples: "0" => true " 0.1 " => true "abc" => false "1 a" => false "2e10" => true Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one. Update (2015-02-10): The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button to reset your code definition. Subscribe to see which companies asked this question Show Tags Math String Show Similar Problems (E) String to Integer (atoi)
// 
