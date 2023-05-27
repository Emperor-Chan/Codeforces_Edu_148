#include <iostream>
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int arr[26] = { 0 };
		cin >> s;
		for (auto j : s)arr[j - 'a']++;
		int counts = 0;
		for (int j = 0; j < 26; j++) {
			if (arr[j] >= 2 && arr[j]) {
				counts++;
			}
		}
 
		if (counts >= 2)cout << "YES\n";
		else cout << "NO\n";
	}
 
	return 0;
}
