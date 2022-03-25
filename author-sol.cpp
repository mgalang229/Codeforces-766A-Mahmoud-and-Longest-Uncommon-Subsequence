#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	// If the strings are the same, Any subsequence of a is indeed a 
	// subsequence of b so the answer is "-1", Otherwise the longer 
	// string can't be a subsequence of the other (If they are equal in 
	// length and aren't the same, No one can be a subsequence of the other) 
	// so the answer is maximum of their lengths.
	string a, b;
	cin >> a >> b;
	if(a == b) {
		cout << "-1\n";
		return;
	}
	cout << max((int) a.size(), (int) b.size()) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
