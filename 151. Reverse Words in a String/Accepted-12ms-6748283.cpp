// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 151. Reverse Words in a String
// https://leetcode.com/problems/reverse-words-in-a-string/
// 

class Solution {
public:
    void reverseWords(string &s) {
        stack<string> st;
        string::size_type from = s.find_first_not_of(" "), to = from;
        while (from != string::npos &&
               (to = s.find_first_of(" ", from)) != string::npos) {
            st.push(s.substr(from, to - from));
            from = s.find_first_not_of(" ", to);
        }
        if (from != string::npos) {
            st.push(s.substr(from));
        }
        s.clear();
        while (!st.empty()) {
            s += st.top();
            st.pop();
            if (!st.empty()) {
                s += " ";
            }
        }
    }
};

// 
// Given an input string, reverse the string word by word. For example, Given s = "the sky is blue", return "blue is sky the". Update (2015-02-12): For C programmers: Try to solve it in-place in O(1) space. click to show clarification. Clarification: What constitutes a word? A sequence of non-space characters constitutes a word. Could the input string contain leading or trailing spaces? Yes. However, your reversed string should not contain leading or trailing spaces. How about multiple spaces between two words? Reduce them to a single space in the reversed string. Subscribe to see which companies asked this question Show Tags String Show Similar Problems (M) Reverse Words in a String II
// 