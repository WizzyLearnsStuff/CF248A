#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int sl = 0, sr = 0;
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		sl += l;
		sr += r;
	}

	cout << min(n - sl, sl) + min(n - sr, sr);
}
