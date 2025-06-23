#include <bits/stdc++.h>

using namespace std;

void MergeSort(vector<int>&) {
  //TODO: implement

}

int main() {

  vector<int> nu{5, 7, 4, 3, 2, -1, -20, 14};

  MergeSort(nu);

  for(int v : nu) {
    cout << v << ", ";
  }

  cout << endl;
}