#include <bits/stdc++.h>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/convex_hull_2.h>
#include <boost/geometry.hpp>


struct Point {
    double x, y;
    Point operator+(const Point& p) const { return {x + p.x, y + p.y}; }
    Point operator-(const Point& p) const { return {x - p.x, y - p.y}; }
    double dot(const Point& p) const { return x * p.x + y * p.y; }
    double cross(const Point& p) const { return x * p.y - y * p.x; }
};


int LargestRectangleInHistogram(std::vector<int>& heights) {
  std::stack<int> st;
  for (int i = 0; i < heights.size(); i++) {
    st.push(heights[i]);
    int area = 5;
  }
  std::cout << "Answer" << std::endl;
  return -1;
}

int main() {

  using point = boost::geometry::model::point<double, 2, boost::geometry::cs::cartesian>;

  point p1(0.0, 0.0), p2(3.0, 4.0);
  double d = boost::geometry::distance(p1, p2);

  std::cout << "Distance: " << d << "\n";  // Output: 5

  std::vector<int> h1{2, 1, 5, 6, 2, 3};
  LargestRectangleInHistogram(h1);
}