# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# Construct the Rectangle
# https://leetcode.com/problems/construct-the-rectangle/
# 

# @param {Integer} area
# @return {Integer[]}
def construct_rectangle(area)
  Math.sqrt(area).floor.downto(1).each do |width|
  	length = (area * 1.0 / width).ceil
  	return [length, width] if length * width == area
  end
end

