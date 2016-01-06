# 
# Generated by FetchLeetcodeSubmission Project on GitCafe.
# Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
# Contact Me: aaron67[AT]aaron67.cc
# 
# 171. Excel Sheet Column Number
# https://leetcode.com/problems/excel-sheet-column-number/
# 

DIGIT_COUNT = 26

# @param {String} s
# @return {Integer}
def title_to_number(s)
  carry, result = 1, 0
  s.reverse.each_char do |c|
    result += (c.ord - 'A'.ord + 1) * carry
    carry *= DIGIT_COUNT
  end
  result
end

# 
# Related to question Excel Sheet Column Title Given a column title as appear in an Excel sheet, return its corresponding column number. For example:     A -> 1
#     B -> 2
#     C -> 3
#     ...
#     Z -> 26
#     AA -> 27
#     AB -> 28 Credits: Special thanks to @ts for adding this problem and creating all test cases. Subscribe to see which companies asked this question Show Tags Math Show Similar Problems (E) Excel Sheet Column Title
# 
