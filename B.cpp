#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define MAX 200001
 
using namespace std;
 
long long arr[MAX];
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	for (int q = 0; q < t; q++) {
		int n, m,s,e;
		long long r = 0;
		cin >> n >> m;
		e = n - 1; s = 2 * m;
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		for (int i = 1; i < n; i++) arr[i] += arr[i - 1];
		for (int i = 0; i <= m; i++) {
			r = max(r, arr[e] - arr[s-1]);
			s -= 2; e--;
		}
		cout << r << '\n';
	}
	return 0;
}
