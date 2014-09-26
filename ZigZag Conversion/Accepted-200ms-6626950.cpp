// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// ZigZag Conversion
// https://oj.leetcode.com/problems/zigzag-conversion/
// 

class Solution {
public:
    string convert(string s, int nRows) {
        if (nRows <= 1 || s.length() <= nRows) {
            return s;
        }
        bool *out = new bool[s.length()]; // 输入字符串中对应位置的字符是否已经被取掉
        memset(out, 0, s.length());
        char *result = new char[s.length() + 1]; // 结果字符串
        memset(result, 0, s.length() + 1);
        int index = 0; // result索引
        for (int i = nRows; i > 0; --i) { // 锯齿状矩形一共有nRows行，取这么多次
            int step = 2 * i - 2; // 每次需要跨越的步长
            int j = nRows - i; // 每次都从j位置开始取
            while (index < s.length() && j < s.length()) {
                result[index++] = s[j];
                out[j] = true;
                if(j + 1 < s.length() && out[j + 1]) { // 如果下一个位置的字符已经被取掉
                    // 则下一次取此位置之后，第一个未被取的字符
                    while (++j < s.length() && out[j]) { ; }
                } else {
                    j = j + step;
                }
            }
        }
        result[index] = 0;
        return string(result);
    }
};

// 
// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility) 
// P   
// A   
// H   
// N
// A 
// P 
// L 
// S 
// I 
// I 
// G
// Y   
// I   
// R
//  
// And then read line by line: "PAHNAPLSIIGYIR" 
// Write the code that will take a string and make this conversion given a number of rows: string convert(string text, int nRows); convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
// 
