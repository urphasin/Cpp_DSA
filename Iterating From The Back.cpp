#include <bits/stdc++.h>

using namespace std;

int main() {
  // Your code here

  vector<int> arr{0, 1, 0, 2, 0, 5, 4, 0, 0, 3, 0, 1, 2, 3, 4, 0, 1, 0};

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) arr.erase(arr.begin() + i);
  }
// BUG: skips some 0s because elements shift left after erase

  // for (int i = arr.size() - 1; i >= 0; i--) {
  //   if (arr[i] == 0) arr.erase(arr.begin() + i);
  // }
  // Safe: removing from the end doesn't affect earlier indexes

  for (size_t i = 0; i < arr.size(); ++i) {
    cout << arr[i];
    if (i != arr.size() - 1) cout << ",";
  }
  cout << endl;

  return 0;
}