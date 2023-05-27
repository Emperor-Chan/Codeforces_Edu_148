#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define MAX 400001
 
using namespace std;
 
long long arr[MAX];
 
void sol(int n) {
	int r = 2;
	bool flag = 0; // 감소하는 추세 
	if (arr[0] < arr[1])flag = 1; // 증가하는 추세 
	for (int i = 2; i < n; i++) {
		if (arr[i] < arr[i - 1] && !flag) continue;
		if (arr[i] > arr[i - 1] && flag) continue;
		flag = !flag;
		r++;
	}
	cout << r << '\n';
}
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int q = 0; q < t; q++) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (i > 0 && arr[i] == arr[i - 1]) {
				i--; n--;
			}
		}
		if (n == 1) cout << 1 << '\n';
		else sol(n);
	}
	return 0;
}
