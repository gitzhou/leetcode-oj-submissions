// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 150. Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/
// 

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> value;
        for (int i = 0; i < tokens.size(); ++i) {
            if (!isOperator(tokens[i])) {
                // 如果是操作数则入栈
                value.push(stringToNumber(tokens[i]));
            } else {
                // 如果是操作符则连续两次出栈，先出栈的为右操作数
                // 对这两个操作数做运算，然后将运算结果入栈
                int rhs = value.top();
                value.pop();
                int lhs = value.top();
                value.pop();
                switch (tokens[i][0]) {
                    case '+':
                        value.push(lhs + rhs);
                        break;
                    case '-':
                        value.push(lhs - rhs);
                        break;
                    case '*':
                        value.push(lhs * rhs);
                        break;
                    case '/':
                        value.push(lhs / rhs);
                        break;
                }
            }
        }
        return value.top();
    }
    
private:
    bool isOperator(const string &s) {
        if (s.length() == 1 &&
            (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/')) {
            return true;
        }
        return false;
    }
    
    int stringToNumber(const string &s) {
        stringstream ss(s);
        int result;
        ss >> result;
        return result;
    }
};

// 
// Evaluate the value of an arithmetic expression in Reverse Polish Notation. Valid operators are +, -, *, /. Each operand may be an integer or another expression. Some examples: 
//   ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
//   ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
//  Subscribe to see which companies asked this question Show Tags Stack Show Similar Problems (H) Basic Calculator (H) Expression Add Operators
// 