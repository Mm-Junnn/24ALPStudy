#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
