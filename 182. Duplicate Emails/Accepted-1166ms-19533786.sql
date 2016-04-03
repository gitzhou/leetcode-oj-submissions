# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# 182. Duplicate Emails
# https://leetcode.com/problems/duplicate-emails/
# 

# Write your MySQL query statement below
SELECT DISTINCT p0.Email
FROM Person p0
WHERE p0.Email IN (SELECT p1.Email FROM Person p1 WHERE p1.Id > p0.Id AND p1.Email = p0.Email)

# 
# Write a SQL query to find all duplicate emails in a table named Person. 
# +----+---------+
# | Id | Email   |
# +----+---------+
# | 1  | a@b.com |
# | 2  | c@d.com |
# | 3  | a@b.com |
# +----+---------+
#  For example, your query should return the following for the above table: 
# +---------+
# | Email   |
# +---------+
# | a@b.com |
# +---------+
#  Note: All emails are in lowercase. Subscribe to see which companies asked this question
# 
