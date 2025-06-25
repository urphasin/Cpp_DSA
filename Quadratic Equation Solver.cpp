#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
  
  // Your code here
  double a, b, c;
  std::cout << "Enter a, b, c: ";
  cin >> a >> b >> c;
  double discriminant = b * b - 4 * a * c;
  if (discriminant >= 0) {
    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
    std::cout << "Roots: " << root1 << ", " << root2 << std::endl;
  } else {
    std::cout << "No real roots" << std::endl;
  }

  return 0;
}