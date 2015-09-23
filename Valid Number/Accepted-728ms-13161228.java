// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Valid Number
// https://leetcode.com/problems/valid-number/
// 

public class Solution {
    public boolean isNumber(String s) {
        return s.matches(
			"^(\\s*[\\+\\-]?(([0-9]*\\.?[0-9]+)|([0-9]+\\.?[0-9]*))([Ee][\\+\\-]?[0-9]+)?\\s*)$");
    }
}

// 
// Validate if a given string is numeric. Some examples: "0" => true " 0.1 " => true "abc" => false "1 a" => false "2e10" => true Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one. Update (2015-02-10): The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button to reset your code definition. Show Tags Math String Show Similar Problems (E) String to Integer (atoi)
// 
