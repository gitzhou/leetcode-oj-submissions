# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# Duplicate Emails
# https://leetcode.com/problems/duplicate-emails/
# 

# Write your MySQL query statement below
SELECT DISTINCT p0.Email
FROM Person p0
WHERE p0.Email IN (SELECT p1.Email FROM Person p1 WHERE p1.Id > p0.Id AND p1.Email = p0.Email)

