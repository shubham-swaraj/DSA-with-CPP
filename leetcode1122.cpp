//Relative sort array 
// we have two array as per second array element we have to print element of arr1
//by sorting it and if the element is not in  arr2 then we will add it on the last of arr..
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr1[] = {2,3,1,3,2,4,6,7,9,2,19};
	int arr2[] = {2,1,4,3,9,6};

	unordered_map<int,int> m;

	// Count frequency
	for (auto e : arr1) {
		m[e]++;
	}

	vector<int> v;

	// Elements according to arr2
	for (auto k : arr2) {
		while (m[k] > 0) {
			v.push_back(k);
			m[k]--;
		}
	}

	// Remaining elements
	vector<int> remaining;

	for (auto p : m) {
		while (p.second > 0) {
			remaining.push_back(p.first);
			p.second--;
		}
	}

	// Sort remaining elements
	sort(remaining.begin(), remaining.end());

	// Add remaining elements
	for (auto x : remaining) {
		v.push_back(x);
	}

	// Print answer
	for (auto x : v) {
		cout << x << " ";
	}

	return 0;
}