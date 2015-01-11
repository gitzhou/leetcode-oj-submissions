# 
# Generated by FetchLeetcodeSubmission Project on GitCafe.
# Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
# Contact Me: aaron67[AT]aaron67.cc
# 
# Combine Two Tables
# https://oj.leetcode.com/problems/combine-two-tables/
# 

SELECT p.FirstName, p.LastName, a.City, a.State
FROM Person p LEFT JOIN Address a
ON p.PersonId = a.PersonId ;

# 
# Table: 
# Person 
# +-------------+---------+
# | 
# Column 
# Name | 
# Type    |
# +-------------+---------+
# | 
# PersonId    | int     |
# | 
# FirstName   | varchar |
# | 
# LastName    | varchar |
# +-------------+---------+
# PersonId is the primary key column for this table.
#  
# Table: 
# Address 
# +-------------+---------+
# | 
# Column 
# Name | 
# Type    |
# +-------------+---------+
# | 
# AddressId   | int     |
# | 
# PersonId    | int     |
# | 
# City        | varchar |
# | 
# State       | varchar |
# +-------------+---------+
# AddressId is the primary key column for this table.
#  
# Write a 
# SQL query for a report that provides the following information for each person in the 
# Person table, regardless if there is an address for each of those people: 
# FirstName, 
# LastName, 
# City, 
# State
# 
