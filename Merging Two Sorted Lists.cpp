#include <bits/stdc++.h>

using namespace std;


void MergeTwoLists(vector<int>& a, vector<int>& b, vector<int>& c) {
	int lenA = a.size();
	int lenB = b.size();

	int APointer = 0;
	int BPointer = 0;

	while(APointer != lenA || BPointer != lenB) {
		while(APointer != lenA && BPointer != lenB) {
			if (a[APointer] <= b[BPointer]) {
				c.push_back(a[APointer]);
				APointer++;
			}
			else {
				c.push_back(b[BPointer]);
				BPointer++;
			}
		}

		while(APointer < lenA) {
		  c.push_back(a[APointer++]);
		}
		
		while(BPointer < lenB) {
		  c.push_back(b[BPointer++]);
		}
	}
}

int main()
{
    std::cout<<"Hello World" << endl;
    
    vector<int> a {2, 8, 15, 18};
    vector<int> b {5, 9, 12, 17};
    vector<int> c {};
    
    MergeTwoLists(a, b, c);
    
    for(int v : c) {
      cout << v << ", ";
    }
    
    cout << endl;

    return 0;
}