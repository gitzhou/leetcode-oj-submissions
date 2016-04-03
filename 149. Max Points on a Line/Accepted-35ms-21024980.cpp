// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 149. Max Points on a Line
// https://leetcode.com/problems/max-points-on-a-line/
// 

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point> &points) {
        int maxCount = 0;
        for (int i = 0; i < points.size(); ++i) {
            int dup = 0; // 与i重复的点的个数
            int cnt = 1; // 直线ij上点的个数，i != j
            for (int j = i + 1; j < points.size(); ++j) {
                if (pointsEqual(points[i], points[j])) {
                    ++dup;
                    continue;
                }
                ++cnt;
                for (int k = j + 1; k < points.size(); ++k) {
                    cnt += (pointsOnSameLine(points[i], points[j], points[k])? 1: 0);
                }
                maxCount = max(maxCount, cnt + dup);
                cnt = 1;
            }
            maxCount = max(maxCount, cnt + dup);
        }
        return maxCount;
    }
    
private:
    // 判断三点是否共线
    inline bool pointsOnSameLine(const Point &start, const Point &end, const Point &p) {
        return (end.y - start.y) * (p.x - start.x) == (end.x - start.x) * (p.y - start.y);
    }
    
    // 判断两点是否相等
    inline bool pointsEqual(const Point &lhs, const Point &rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    }
};

// 
// Given n points on a 2D plane, find the maximum number of points that lie on the same straight line. Subscribe to see which companies asked this question Show Tags Hash Table Math
// 
